total = 0

num = int(input("Informe um número (0 - SAIR): "))
while num != 0:
    if num < 0:
        print("Valor negativo não é permitido! Tente novamente.")
    else:
        total = total + num
    num = int(input("Informe um número (0 - SAIR): "))

print("A soma total dos números digitados foi: ", total)

# Outra possibilidade

total2 = 0

while True:
    num2 = int(input("Informe um número (0 - SAIR): "))

    if num2 < 0:
        print("Valor negativo não é permitido! Tente novamente.")
        continue
    elif num2 == 0:
        print("Saindo...")
        break
    total2 = total2 + num2

print("A soma total dos números digitados foi: ", total2)