# Desenvolva um programa que solicite ao usuário a quantidade de horas
# que ele estudou durante o dia. Caso a quantidade de horas seja menor do
# que 4 horas, exiba uma mensagem incentivando-o a estudar mais.

quantHoras = float(input("Quantas horas você estudou durante o primeiro dia? "))

if quantHoras < 4:
    print("O Naruto pode ser um pouco duro às vezes, talvez você não saiba disso mas o Naruto também cresceu sem pai, na verdade, ele nunca conheceu nenhum de seus pais e nunca teve nenhum amigo em nossa aldeia, mesmo assim, eu nunca vi ele chorar, ficar zangado ou se dar por vencido, ele está sempre disposto a melhorar, ele quer ser respeitado, é o sonho dele, e o Naruto daria a vida por isso sem hesitar, meu palpite é que ele se cansou de chorar e decidiu fazer alguma coisa a respeito")

# Desenvolva um programa que solicite ao usuário a quantidade de horas
# que ele estudou durante o dia. Caso a quantidade de horas seja menor do
# que 4 horas, exiba uma mensagem incentivando-o a estudar mais. Se a
# quantidade de horas for maior ou igual a 4 horas, mas menor do que 8
# horas, exiba uma mensagem de parabéns.

quantHoras2 = float(input("Quantas horas você estudou durante o segundo dia? "))

if quantHoras2 < 4:
    print("O Naruto pode ser um pouco duro às vezes, talvez você não saiba disso mas o Naruto também cresceu sem pai, na verdade, ele nunca conheceu nenhum de seus pais e nunca teve nenhum amigo em nossa aldeia, mesmo assim, eu nunca vi ele chorar, ficar zangado ou se dar por vencido, ele está sempre disposto a melhorar, ele quer ser respeitado, é o sonho dele, e o Naruto daria a vida por isso sem hesitar, meu palpite é que ele se cansou de chorar e decidiu fazer alguma coisa a respeito")

else:
    print("Você deveria tentar viver um pouco.")

# Desenvolva um programa que solicite ao usuário a quantidade de horas que ele
# estudou durante o dia. Caso a quantidade de horas seja menor do que 4 horas, exiba
# uma mensagem incentivando-o a estudar mais. Se a quantidade de horas for maior ou
# igual a 4 horas, mas menor do que 8 horas, exiba uma mensagem de parabéns. E se a
# quantidade de horas for igual ou superior a 8 horas, exiba uma mensagem de
# reconhecimento pelo esforço, incentivando-o a manter o bom ritmo de estudo

quantHoras3 = float(input("Quantas horas você estudou durante o terceiro dia? "))

if quantHoras3 < 4:
    print("O Naruto pode ser um pouco duro às vezes, talvez você não saiba disso mas o Naruto também cresceu sem pai, na verdade, ele nunca conheceu nenhum de seus pais e nunca teve nenhum amigo em nossa aldeia, mesmo assim, eu nunca vi ele chorar, ficar zangado ou se dar por vencido, ele está sempre disposto a melhorar, ele quer ser respeitado, é o sonho dele, e o Naruto daria a vida por isso sem hesitar, meu palpite é que ele se cansou de chorar e decidiu fazer alguma coisa a respeito")

elif quantHoras3 >= 4 and quantHoras3 < 8:
    print("Parabéns, mas tenta viver um pouco também!")

else:
    print("Você deveria tentar viver um pouco.")

# Você foi contratado para desenvolver um sistema de cadastro de
# clientes para uma empresa. Como parte desse sistema, você deve
# criar um menu interativo que permita aos usuários realizar
# operações como adicionar um novo cliente, exibir todos os clientes
# cadastrados, buscar um cliente pelo nome, atualizar informações de
# um cliente e excluir um cliente do sistema.

print("1 - Cadastrar novo cliente")
print("2 - Exibir clientes cadastrados")
print("3 - Buscar cliente cadastrado")
print("4 - Atualizar cadastro de cliente")
print("5 - Excluir conta do cliente")
print("6 - Sair")
opcao = int(input("Escolha uma opção: "))

match (opcao):
    case 1:
        print("Iniciando cadastro de novo cliente...")
    case 2:
        print("Exibindo clientes cadastrados...")
    case 3:
        print("Buscando cliente no banco de dados...")
    case 4:
        print("Abrindo tela de atualização de cadastro...")
    case 5:
        print("Abrindo tela de clientes para exclusão...")
    case 6:
        print("Desligando programa...")
    case __:
        print("Opção Inválida!")