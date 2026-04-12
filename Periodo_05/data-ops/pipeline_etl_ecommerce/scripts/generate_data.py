import pandas as pd
import numpy as np
from faker import Faker
from datetime import datetime, timedelta
import random
import os


fake = Faker('pt_BR')
Faker.seed(42)
random.seed(42)
np.random.seed(42)

RAW_DATA_DIR = '../data/raw'
os.makedirs(RAW_DATA_DIR, exist_ok=True)


def generate_customers(n=3000):
    customers = []
    estados_br = ['SP', 'RJ', 'MG', 'RS', 'PR', 'SC', 'BA', 'PE', 'CE', 'GO']

    for i in range(1, n + 1):
        customer = {
            'customer_id': i,
            'customer_name': fake.name(),
            'city': fake.city(),
            'state': random.choice(estados_br),
            'signup_date': fake.date_between(start_date='-2y', end_date='today')
        }
        customers.append(customer)

    df = pd.DataFrame(customers)
    df.to_csv(f'{RAW_DATA_DIR}/customers.csv', index=False)
    print(f"------- Gerados {n} clientes -------")
    return df


def generate_products(n=300):
    products = []
    categorias = ['Eletrônicos', 'Roupas', 'Livros', 'Esportes', 'Casa e Jardim',
                  'Beleza', 'Brinquedos', 'Alimentos', 'Automotivo', 'Saúde']

    for i in range(1, n + 1):
        product = {
            'product_id': i,
            'product_name': fake.catch_phrase(),
            'category': random.choice(categorias),
            'price': round(random.uniform(10, 1000), 2)
        }
        products.append(product)

    df = pd.DataFrame(products)
    df.to_csv(f'{RAW_DATA_DIR}/products.csv', index=False)
    print(f"------- Gerados {n} produtos -------")
    return df


def generate_orders(n=10000, n_customers=3000):
    orders = []
    status_list = ['completed', 'pending', 'cancelled', 'processing', 'shipped']

    start_date = datetime.now() - timedelta(days=365)
    end_date = datetime.now()

    for i in range(1, n + 1):
        order = {
            'order_id': i,
            'customer_id': random.randint(1, n_customers),
            'order_date': fake.date_between(start_date=start_date, end_date=end_date),
            'status': random.choice(status_list)
        }
        orders.append(order)

    df = pd.DataFrame(orders)
    df.to_csv(f'{RAW_DATA_DIR}/orders.csv', index=False)
    print(f"------- Gerados {n} pedidos -------")
    return df


def generate_order_items(n=20000, n_orders=10000, n_products=300):
    order_items = []

    for i in range(1, n + 1):
        quantity = random.randint(1, 5)
        unit_price = round(random.uniform(10, 1000), 2)

        item = {
            'order_item_id': i,
            'order_id': random.randint(1, n_orders),
            'product_id': random.randint(1, n_products),
            'quantity': quantity,
            'unit_price': unit_price
        }
        order_items.append(item)

    df = pd.DataFrame(order_items)
    df.to_csv(f'{RAW_DATA_DIR}/order_items.csv', index=False)
    print(f"------- Gerados {n} itens de pedido -------")
    return df


if __name__ == "__main__":
    print("Iniciando geração de dados fake...")
    print("-" * 40)

    generate_customers(3000)
    generate_products(300)
    generate_orders(10000)
    generate_order_items(20000)

    print("-" * 40)
    print("Geração de dados concluída!")