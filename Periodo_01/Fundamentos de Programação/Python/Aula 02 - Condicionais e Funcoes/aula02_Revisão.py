salarioFixo = 1200
valorPorVenda = float(input("Qual foi o valor total das vendas? "))
vendasEfetuadas = float(input("Quantas vendas você efetuou este mês? "))
porcentagemComissao = float(input("Qual o valor da sua comissão em porcentagem? "))
porcVendasEfetuadas = (valorPorVenda * porcentagemComissao) / 100

salarioFinal = salarioFixo + porcVendasEfetuadas

print(f"O valor do seu salário este mês foi de: R${salarioFinal:.2f}")