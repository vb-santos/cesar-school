SELECT '1. FATURAMENTO TOTAL POR MÊS' as Consulta;
SELECT
    year_month as Mes,
    COUNT(DISTINCT order_id) as Total_Pedidos,
    ROUND(SUM(total_value), 2) as Faturamento_Total
FROM analytics_fact_orders
GROUP BY year_month
ORDER BY year_month;

SELECT '2. FATURAMENTO POR CATEGORIA' as Consulta;
SELECT
    category as Categoria,
    SUM(quantity) as Unidades_Vendidas,
    ROUND(SUM(total_value), 2) as Faturamento_Total
FROM analytics_fact_orders
GROUP BY category
ORDER BY Faturamento_Total DESC;

SELECT '3. PEDIDOS POR ESTADO' as Consulta;
SELECT
    state as Estado,
    COUNT(DISTINCT order_id) as Total_Pedidos,
    COUNT(DISTINCT customer_id) as Total_Clientes
FROM analytics_fact_orders
GROUP BY state
ORDER BY Total_Pedidos DESC;

SELECT '4. TICKET MÉDIO POR CLIENTE' as Consulta;
SELECT
    customer_name as Cliente,
    state as Estado,
    COUNT(DISTINCT order_id) as Total_Pedidos,
    ROUND(AVG(total_value), 2) as Ticket_Medio
FROM analytics_fact_orders
GROUP BY customer_name, state
ORDER BY Ticket_Medio DESC
LIMIT 10;

SELECT '5. TOP 10 PRODUTOS MAIS VENDIDOS' as Consulta;
SELECT
    product_name as Produto,
    category as Categoria,
    SUM(quantity) as Unidades_Vendidas,
    ROUND(SUM(total_value), 2) as Faturamento_Total
FROM analytics_fact_orders
GROUP BY product_name, category
ORDER BY Unidades_Vendidas DESC
LIMIT 10;