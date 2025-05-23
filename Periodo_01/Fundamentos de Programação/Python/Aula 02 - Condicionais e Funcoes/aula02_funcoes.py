import os

def nomeSistema():
    print("--------->>>>>>>>> Express Systems <<<<<<<<<---------")

def menu():
    print("1 - Cadastrar Cliente")
    print("2 - Exibir Clientes")
    print("3 - Buscar Cliente")
    print("4 - Atualiza Cliente")
    print("5 - Excluir Cliente")
    print("6 - Sair")

def escolha():
    opcao = int(input("Escolha uma opção: "))
    match(opcao):
        case 1:
            print("Cadastrando um Cliente...")
        case 2:
            print("Exibindo os dados de todos os Clientes...")
        case 3:
            print("Exibindo os dados de um Cliente...")
        case 4:
            print("Atualizando um cliente...")
        case 5:
            print("Excluindo um Cliente...")
        case 6:
            print("Saindo do Sistema...")
        case __:
            print("Opção Inválida!")
            main()

def main():
    os.system('cls')
    nomeSistema()
    menu()
    escolha()

if __name__ == '__main__':
    main()