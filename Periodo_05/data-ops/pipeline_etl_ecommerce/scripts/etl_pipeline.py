import pandas as pd
import duckdb
from datetime import datetime

RAW_DATA_DIR = '../data/raw'
DB_PATH = '../data/ecommerce.duckdb'


class ETLPipeline:
    def __init__(self):
        self.conn = duckdb.connect(DB_PATH)
        self.raw_data = {}
        self.transformed_data = {}

    def extract(self):
        print("Extraindo dados...")
        self.raw_data['customers'] = pd.read_csv(f'{RAW_DATA_DIR}/customers.csv')
        self.raw_data['products'] = pd.read_csv(f'{RAW_DATA_DIR}/products.csv')
        self.raw_data['orders'] = pd.read_csv(f'{RAW_DATA_DIR}/orders.csv')
        self.raw_data['order_items'] = pd.read_csv(f'{RAW_DATA_DIR}/order_items.csv')
        print(f"  Clientes: {len(self.raw_data['customers'])}")
        print(f"  Produtos: {len(self.raw_data['products'])}")
        print(f"  Pedidos: {len(self.raw_data['orders'])}")
        print(f"  Itens: {len(self.raw_data['order_items'])}")

    def transform(self):
        print("\nTransformando dados...")

        self.raw_data['orders']['order_date'] = pd.to_datetime(self.raw_data['orders']['order_date'])
        self.raw_data['customers']['signup_date'] = pd.to_datetime(self.raw_data['customers']['signup_date'])

        self.raw_data['order_items']['total_value'] = (
                self.raw_data['order_items']['quantity'] *
                self.raw_data['order_items']['unit_price']
        )

        print("  Realizando joins...")
        df = self.raw_data['orders'].merge(self.raw_data['customers'], on='customer_id')
        df = df.merge(self.raw_data['order_items'], on='order_id')
        df = df.merge(self.raw_data['products'], on='product_id')

        df['year_month'] = pd.to_datetime(df['order_date']).dt.strftime('%Y-%m')

        self.transformed_data['consolidated'] = df
        self.transformed_data['consolidated_completed'] = df[df['status'] == 'completed']

        print(f"  Consolidado: {len(self.transformed_data['consolidated'])} registros")
        print(f"  Apenas concluídos: {len(self.transformed_data['consolidated_completed'])} registros")

    def load(self):
        print("\nCarregando no DuckDB...")

        for name, df in self.raw_data.items():
            self.conn.execute(f"CREATE OR REPLACE TABLE raw_{name} AS SELECT * FROM df")
            print(f"  ✓ raw_{name}")

        self.conn.register('temp_consolidated', self.transformed_data['consolidated'])
        self.conn.execute("CREATE OR REPLACE TABLE processed_consolidated AS SELECT * FROM temp_consolidated")
        self.conn.unregister('temp_consolidated')
        print(f"  ✓ processed_consolidated")

        self.conn.register('temp_completed', self.transformed_data['consolidated_completed'])
        self.conn.execute("CREATE OR REPLACE TABLE analytics_fact_orders AS SELECT * FROM temp_completed")
        self.conn.unregister('temp_completed')
        print(f"  ✓ analytics_fact_orders")

        print("\nCarga concluída!")

        count = self.conn.execute("SELECT COUNT(*) FROM analytics_fact_orders").fetchone()[0]
        print(f"analytics_fact_orders tem {count} registros")

    def run(self):
        print("=" * 50)
        print("INICIANDO PIPELINE ETL")
        print("=" * 50)
        start = datetime.now()
        self.extract()
        self.transform()
        self.load()
        end = datetime.now()
        print(f"\nTempo: {(end - start).total_seconds():.2f} segundos")
        print("=" * 50)
        self.conn.close()


if __name__ == "__main__":
    pipeline = ETLPipeline()
    pipeline.run()