import os

def nomeLoja():
    print("----- Loja de peças automotivas -----")

def menu():
    print("1 | Bateria           | R$200,00")
    print("2 | Pneu              | R$350,00")
    print("3 | Filtro de Óleo    | R$50,00")
    print("4 | Pastilha de Freio | R$100,00")
    print("5 | Sair do Sistema")

valorTotal = 0
def escolha():
    global valorTotal
    opcao = int(input("Informe sua opção: "))
    match(opcao):
        case 1:
            print("Você escolheu Bateria")
            valorTotal = valorTotal + 200
            repetir()
        case 2:
            print("Você escolheu Pneu")
            valorTotal = valorTotal + 350
            repetir()
        case 3:
            print("Você escolheu Filtro de Óleo")
            valorTotal = valorTotal + 50
            repetir()
        case 4:
            print("Você escolheu Pastilha de Freio")
            valorTotal = valorTotal + 100
            repetir()
        case __:
            print("Opção Inválida")
            main()

def repetir():
    repeticao = input("Deseja inserir um novo item? (S/N): ")
    if repeticao == 'n' or repeticao == 'N':
        print(f"O valor total informado foi de: R${valorTotal}")

    if repeticao == 's' or repeticao == 'S':
        escolha()

def main():
    os.system('cls')
    nomeLoja()
    menu()
    escolha()
    repetir()

if __name__ == '__main__':
    main()