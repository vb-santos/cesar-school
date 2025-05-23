import json
import os
from time import sleep

arquivo = os.path.join(os.path.dirname(__file__), 'usuarios.json')

def adicionar_usuario(nome, idade, email, cpf):
    with open(arquivo, 'r') as f:
        usuarios = json.load(f)

    usuarios.append({'nome': nome, 'idade': idade, 'email': email, 'cpf' : cpf})

    with open(arquivo, 'w') as f:
        json.dump(usuarios, f, indent=4)

    print("CLIENTE ADICIONADO COM SUCESSO!")

def atualizar_usuario(nome_antigo, novo_nome, nova_idade, novo_email, novo_cpf):
    with open(arquivo, 'r') as f:
        usuarios = json.load(f)

    for usuario in usuarios:
        if usuario['nome'] == nome_antigo:
            usuario['nome'] = novo_nome
            usuario['idade'] = nova_idade
            usuario['email'] = novo_email
            usuario['cpf'] = novo_cpf
            break

    with open(arquivo, 'w') as f:
        json.dump(usuarios, f, indent=4)

    print("CLIENTE ATUALIZADO COM SUCESSO!")
    

def listar_usuarios():
    with open(arquivo, 'r') as f:
        usuarios = json.load(f)

    if usuarios:
        print("=" *50)
        print("| LISTA DE CLIENTES | ")
        print("-" *50)
        for usuario in usuarios:
            print("*" *50)
            print(f"NOME: {usuario['nome']}\nIDADE: {usuario['idade']}\nEMAIL: {usuario['email']}\nCPF: {usuario['cpf']}")
            print("+" *50)
          
    else:
        print("NÃO HÁ NENHUM CLIENTE CADASTRADO!")

def excluir_usuario(cpf):
    with open(arquivo, 'r') as f:
        usuarios = json.load(f)

    for usuario in usuarios:  
        if usuario['cpf'] == cpf:
            usuarios.remove(usuario)

    with open(arquivo, 'w') as f:
        json.dump(usuarios, f, indent=4)
        print("CLIENTE EXCLUÍDO COM SUCESSO!")

def buscar_usuario (cpf):
    with open(arquivo, 'r') as f:
        usuarios = json.load(f)

    for usuario in usuarios:
        if usuario['cpf'] == cpf:
            print(f"NOME: {usuario['nome']}\nIDADE: {usuario['idade']}\nEMAIL: {usuario['email']}\nCPF: {usuario['cpf']}")
            return
    
    print("NÃO HÁ NENHUM CLIENTE CADASTRADO COM ESSE CPF! POR FAVOR, TENTE NOVAMENTE!")
    

def exibir_menu():
    print("\nSEJA BEM-VINDO(A) AO ESPAÇO DO CLIENTE!  QUAL DOS SERVIÇOS ABAIXO VOCÊ DESEJA?:\n")
    print(" | 1 -->    ADICIONAR CADASTRO DE CLIENTE       <-- |")
    print(" | 2 -->     ATUALIZAR CLIENTE CADASTRADO       <-- |")
    print(" | 3 -->      EXIBIR CADASTRO DO CLIENTE        <-- |")
    print(" | 4 -->     LISTAR CLIENTES CADASTRADOS        <-- |")
    print(" | 5 -->     EXCLUIR CLIENTE CADASTRADO         <-- |")
    print(" | 6 -->      VOLTAR AO MENU ANTERIOR           <-- |\n")

def maioridade(idade):
    if(idade <= 17):
        print(" ---> O CADASTRO DEVE SER FEITO POR UMA PESSOA MAIOR DE IDADE! <--- ")
        return False
    else:
        print(" --> O CLIENTE É MAIOR DE IDADE! <-- ")
        return True

def moduloUsuarios():
    while True: 
        exibir_menu()
        opcao = input("INSIRA O NÚMERO DA SUA ESCOLHA:\n ---> ")

        if opcao == "1":
            nome = input(" INSIRA O NOME:\n ---> ")
            idade = int(input(" INSIRA A IDADE:\n ---> "))
            if maioridade(idade):
                email = input("INSIRA O EMAIL: \n ---> ")
                cpf = input("INSIRA O CPF (SOMENTE NÚMEROS):\n ---> ")
                adicionar_usuario(nome, idade, email, cpf)
            
        elif opcao == "2":
            nome_antigo = input("INSIRA O CPF A SER ATUALIZADO:\n ---> ")
            escolha = int(input("QUAL INFORMAÇÃO VOCÊ DESEJA ATUALIZAR?\n ---> "))
            print("1. Nome  --> ")
            print("2. Idade --> ")
            print("3. Email --> ")
            print("4. CPF   --> ")
            

            if(escolha == 1):
                novo_nome = input("INSIRA O NOVO NOME:\n ---> ")
                with open ('usuarios.json') as f:
                    data = json.load(f)
                print(data)
                nova_idade = idade
                novo_email = email
                novo_cpf = cpf

            elif(escolha == 2):
                nova_idade = input("INSIRA A NOVA IDADE:\n ---> ")
                with open ('usuarios.json') as f:
                    data = json.load(f)
                print(data)

                novo_nome = nome
                novo_email = email
                novo_cpf = cpf
            elif(escolha == 3):
                novo_email = input("INSIRA O NOVO EMAIL:\n ---> ")
                with open ('usuarios.json') as f:
                    data = json.load(f)
                print(data)
                
                nova_idade = idade
                novo_nome = nome
                novo_cpf = cpf
            elif(escolha == 4):
                novo_cpf = input("INSIRA O NOVO CPF (SOMENTE NÚMEROS):\n ---> ")
                with open ('usuarios.json') as f:
                    data = json.load(f)
                print(data)

                novo_nome = nome
                nova_idade = idade
                novo_email = email

            else:
                with open ('usuarios.json') as f:
                    data = json.load(f)
                print(data)
                
                nova_idade = idade
                novo_email = email
                novo_nome = nome
                novo_cpf

                print(" --> 😭 OPÇÃO INVÁLIDA! TENTE NOVAMENTE! 😭 <-- ")
            atualizar_usuario(nome_antigo, novo_nome, nova_idade, novo_email)

        elif opcao == "3":
            nome = input("INSIRA O CPF DO CLIENTE (SOMENTE NÚMEROS):\n ---> ")
            buscar_usuario(cpf)

        elif opcao == "4":
            listar_usuarios()

        elif opcao == "5":
            nome = input("INSIRA O CPF DO CLIENTE A SER EXCLUÍDO:\n ---> ")
            excluir_usuario(nome)

        elif opcao == "6":
            print("VOLTANDO AO MENU ANTERIOR...\n")
            sleep(3)
            break

        else:
            print(" --> 😭 OPÇÃO INVÁLIDA. TENTE NOVAMENTE! 😭 <--")