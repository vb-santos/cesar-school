# Escreva um programa que declare duas variáveis inteiras, atribua valores a elas e exiba
# a soma, subtração, multiplicação e divisão desses dois números.

numero1 = int(input("Digite o número 1: "))
numero2 = int(input("Digite o número 2: "))

print(numero1 + numero2)
print(numero1 - numero2)
print(numero1 * numero2)
print(numero1 / numero2)

# Escreva um programa que declare uma variável real para representar uma quantia em
# dólares. Solicite ao usuário que insira essa quantia e, em seguida, converta-a para reais,
# utilizando um fator de conversão fixo. Exiba o resultado.

dolares = float(input("Informe o valor em dólares: "))
reais = dolares * 4.8

print("O valor em reais é de ", reais)

# Escreva um programa que declare três variáveis reais para representar as notas de um
# aluno em uma disciplina. Peça ao usuário para informar essas notas e depois calcule a
# média aritmética. Exiba o resultado.

nota1 = int(input("Informe sua nota 1: "))
nota2 = int(input("Informe sua nota 2: "))
nota3 = int(input("Informe sua nota 3: "))
nota4 = int(input("Informe sua nota 4: "))
media = (nota1 + nota2 + nota3 + nota4)/4

print("A média do aluno é de: ", media)

# Uma revendedora de carros oferece aos seus vendedores um
# salário mensal fixo, além de uma comissão fixa pelos carros
# vendido e 5% do valor total das vendas efetuadas por eles.

# Escrever um programa em Python que leia o número de carros por
# ele vendidos, o valor total de suas vendas, o salário fixo e a
# comissão que ele recebe por carro vendido. Calcule e escreva o
# salário final do vendedor.

salario = float(input("Informe o salário: "))
carrosVendidos = int(input("Quantos carros foram vendidos? "))
totalVendas = float(input("Qual o valor total de vendas "))
comissao = int(input("Informe o valor por cada carro vendido: "))
salarioFinal = salario + (carrosVendidos * comissao) + (totalVendas * 0.05)

print("A comissão recebida é de R$", salarioFinal)

