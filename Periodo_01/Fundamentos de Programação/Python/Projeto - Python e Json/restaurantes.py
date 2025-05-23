# Importar bibliotecas
import json
import os
import textwrap 
from time import sleep

# Abrir e Fechar Json com funções -----------------------
arquivo = os.path.join(os.path.dirname(__file__), 'restaurantes.json')

def carregar_json(arquivo):
    with open(arquivo, 'r') as f:
        return json.load(f)
    
def salvar_json(arquivo, restaurantes):
    with open(arquivo, 'w') as f:
        json.dump(restaurantes, f, indent=4)

# Funções Base ------------------------------

# Adicionar Restaurante ---------------------
def adicionarRestaurante(arquivo):
    restaurantes = carregar_json(arquivo)
    # Declarar restaurantes como o arquivo JSON
        
    nomeRestaurante = input("- Digite o nome: >>> ").title()
    # .title() faz a primeira letra de cada palavra maiusculo e o resto minus (Burguer King)

    while True:
        if filtrarRestaurante(arquivo, nomeRestaurante):
            print("\nO nome informado já existe!")
            nomeRestaurante = input("- Digite o nome: >>> ").title()
            # Checar se o nome do restaurante já existe e solicitar um novo nome
        else:
            break

    # Variáveis  
    notaRest = float(input("- Digite a nota (0-5): >>> "))

    while (notaRest < 0 or notaRest > 5):
        print("Nota inválida. Tente novamente.")
        notaRest = float(input("- Digite a nota (0-5): >>> "))
        # Checar se a nota é válida de acordo com os critérios

    enderecoRest = input("- Informe o endereço (logradouro - nro - bairro - cidade/sigla estado): >>> ")
    telefoneRest = input("- Informe o número de telefone ((xx) 9xxx-xxx): >>> ")
    mesasRest = int(input("- Informe o número de mesas disponíveis: >>> "))
    horariosFuncionamento = input("- Informe os horários de funcionamento (ex: 09h - 12h e 12h - 20h): >>> ")
    cardapio = input("- Informe um item servido no seu restaurante e seu preço em R$ (Pressione Enter para cancelar): >>> ")
    
    while True:
        maisCardapio = input("- Informe outro item servido no seu restaurante e seu preço em R$ (Pressione Enter para cancelar): >>> ")
        if maisCardapio == "":
            break
        
        cardapio += "\n\t\t\t\t" + maisCardapio
        # Identar mensagem do cardápio
        # \t = tab
        # \n = quebra de linha

    restaurantes.append({
            # Adicionar variáveis à suas respectivas chaves no JSON
            'nomeRestaurante': nomeRestaurante,
            'notaRest': notaRest,
            'enderecoRest': enderecoRest,
            'telefoneRest': telefoneRest,
            'mesasRest': mesasRest,
            'horariosFuncionamento': horariosFuncionamento,
            'cardapio': cardapio
            })
        
    salvar_json(arquivo, restaurantes)
    print("O restaurante foi adicionado!\n")
    
# Verificar se restaurante existe
def filtrarRestaurante(arquivo, nomeRestaurante):
    restaurantes = carregar_json(arquivo)

    for restaurante in restaurantes:
        if restaurante['nomeRestaurante'].title() == nomeRestaurante:
            return True
            # Se o nome indicado do restaurante é existente, retorna True, se não, False
    return False

# Listar Restaurantes -----------------------
def listarRestaurantes(arquivo):
    restaurantes = carregar_json(arquivo)

    if not restaurantes:
        # Se a lista estiver vazia (if not)
        print("\n=== Nenhum restaurante foi encontrado. ===\n")
        return

    # Criar mensagem de exibição
    topoListaRest = " LISTA DE RESTAURANTES "
    print("\n")
    print(topoListaRest.center(50, "-"))
    # Pegar todos os "restaurantes" presentes na lista restaurante
    for restaurante in restaurantes:
        # Criar mensagem e atribuir ela à variável linha
        # """ descreve uma str em que você pode criar com múltiplas linhas de python, "lorem ipsum" é o padrão de linha única
        linha = f"""
Nome:\t\t\t\t{restaurante['nomeRestaurante']}
Nota:\t\t\t\t{restaurante['notaRest']}*
Endereço:\t\t\t{restaurante['enderecoRest']}
Telefone:\t\t\t{restaurante['telefoneRest']}
Mesas disponíveis:\t\t{restaurante['mesasRest']}
Horários:\t\t\t{restaurante['horariosFuncionamento']}
Cardápio:\t\t\t{restaurante['cardapio']}
            """
        print("=" * 50)
        print(textwrap.dedent(linha))
        print("=" * 50)
        # textwrap.dedent Remove espaços em brancos " " inúteis antes ou depois das strings
        # Dedent não está funcionando por algum motivo, por isso a mensagem está colada na esquerda
    print("-" * 50, "\n")
            
# Atualizar Restaurantes --------------------
def atualizarRestaurante(arquivo):
    restaurantes = carregar_json(arquivo)

    nomeRestAntigo = input("\n- Digite o nome do restaurante a ser atualizado: >>> ").title()
    # Pede o nome do restaurante e checa se ele existe na lista de restaurantes
    for restaurante in restaurantes:
        # Se o restaurante existir
        if restaurante['nomeRestaurante'] == nomeRestAntigo:
            while True:
                # Enquanto for verdade
                if filtrarRestaurante(arquivo, nomeRestAntigo):
                    # Filtra o restaurante específico com aquele nome indicado e pede um novo nome
                    while True:
                        nomeRestNovo = input("- Digite o novo nome (Pressione Enter para avançar): >>> ")

                        if nomeRestNovo == "":
                            # Se o nome novo for vazio, quebra o while
                            break

                        if nomeRestNovo != nomeRestAntigo and filtrarRestaurante(arquivo, nomeRestNovo):
                            # Se o nome novo for diferente do antigo, mas o antigo já existir, retorna pro while
                            print("O nome inserido já existe. Por favor, insira um nome diferente.")

                        else:
                            # Se o novo nome for diferente de nada e não existir, troca o valor do nome do restaurante
                            restaurante['nomeRestaurante'] = nomeRestNovo.title()
                            break
             
                # Função de atualizar chave com alguns parâmetros
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar a nota do restaurante? (S/N): >>> ",
                                # pergunta = pergunta ao usuario se deseja ou não atualizar x chave
                                chave="notaRest",
                                # chave = especifica a chave no dicionário json
                                prompt="- Digite a nova nota: >>> ",
                                # prompt = perguntar o novo valor
                                tipo=float
                                # tipo = tipo do dado inserido pelo usuário para filtrar na função
                                )
                
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar o endereço do restaurante? (S/N): >>> ",
                                chave="enderecoRest",
                                prompt="- Digite o novo endereço: >>> ",
                                tipo=str
                                )
                
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar o telefone do restaurante? (S/N): >>> ",
                                chave="telefoneRest",
                                prompt="- Digite o novo telefone: >>> ",
                                tipo=str
                                )
                
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar a quantidade de mesas do restaurante? (S/N): >>> ",
                                chave="mesasRest",
                                prompt="- Digite o novo quantia de mesas: >>> ",
                                tipo=int
                                )
                
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar o horário de funcionamento do restaurante? (S/N): >>> ",
                                chave="horariosFuncionamento",
                                prompt="- Digite o novo horário de funcionamento: >>> ",
                                tipo=str
                                )
                
                atualizarChave(restaurante,
                                pergunta="- Deseja atualizar o cardápio do restaurante? (S/N): >>> ",
                                chave="cardapio",
                                prompt="- Digite novos produtos para o cardápio (Um por vez): >>> ",
                                tipo=str
                                )
                
                break

            salvar_json(arquivo, restaurantes)
            print("O restaurante foi atualizado.")
            return
    print("Restaurante não encontrado.\n")

def atualizarChave(restaurante, pergunta, chave, prompt, tipo):
    while True:
        # Pergunta ao usuário se ele deseja ou não alterar alguma chave
        opcao = input(f"\n{pergunta}").lower()

        # Se a resposta estiver dentro da lista (s ou sim)
        if opcao in ("s", "sim"):
            if tipo == str:
                # Se o tipo do dado for string
                novoValor = input(f"{prompt}")

                # Se a chave indicada for 'cardapio'
                if chave == 'cardapio':
                    while True:
                        maisCardapio = input("Digite novos produtos para o cardápio (Pressione Enter para cancelar) >>> ")
                        if maisCardapio == "":
                            break
                        cardapio += "\n\t\t\t\t" + maisCardapio
                        # Repete processo de criação do cardápio

                if novoValor:
                    restaurante[chave] = novoValor
                    # Se o novo valor existir, retorna para a chave especifica
                    
            elif tipo == float:
                novoValor = float(input(f"{prompt}"))
                
                if chave == 'notaRest':
                    while (novoValor < 0 or novoValor> 5):
                        print("Nota inválida. Tente novamente.")
                        novoValor = float(input("- Digite a nova nota (0-5): >>> "))

                if novoValor:
                    restaurante[chave] = novoValor

            elif tipo == int:
                novoValor = float(input(f"{prompt}"))

                if novoValor:
                    restaurante[chave] = novoValor
            break

        elif opcao in ("n", "nao"):
            # Se o usuario optar por alguma resposta dentro da lista (n e nao)
            break
        
        else:
            print("Opção Inválida, por favor, insira algo válido")
            # Caso a resposta não se encontre em nenhuma lista

# Excluir Restaurante ---------------------
def excluirRestaurante(arquivo, nomeRestaurante):
    restaurantes = carregar_json(arquivo)
    
    for restaurante in restaurantes:
        # Checa se o nome indicado pelo usuário (Está no case) é igual à algum existente
        if restaurante['nomeRestaurante'] == nomeRestaurante.title():
            restaurantes.remove(restaurante)
            # Remove o restaurante da lista de acordo com a chave nome
            salvar_json(arquivo, restaurantes)
            print("O restaurante foi excluído.\n")
    
        else:
            print("Não foi possível encontrar este restaurante\n")

# Buscar Restaurante -----------------------
# MESMA EXPLICAÇÃO DE LISTAR RESTAURANTES, PORÉM COM A CHECAGEM DE NOME
def buscarRestaurante(arquivo, nomeRestaurante):
    restaurantes = carregar_json(arquivo)

    topoListaRest = f" INFOS {nomeRestaurante.upper()} "
    print("\n")
    print(topoListaRest.center(50, "-"))
    for restaurante in restaurantes:
        if restaurante['nomeRestaurante'] == nomeRestaurante.title():
            linha = f"""
Nome:\t\t\t\t{restaurante['nomeRestaurante']}
Nota:\t\t\t\t{restaurante['notaRest']}*
Endereço:\t\t\t{restaurante['enderecoRest']}
Telefone:\t\t\t{restaurante['telefoneRest']}
Mesas disponíveis:\t\t{restaurante['mesasRest']}
Horários:\t\t\t{restaurante['horariosFuncionamento']}
Cardápio:\t\t\t{restaurante['cardapio']}
                """
            print("=" * 50)
            print(textwrap.dedent(linha))
            print("=" * 50)
            print("-" * 50, "\n")

        if not restaurante:
            print("\n=== Nenhum restaurante foi encontrado. ===\n")
            return
    
def exibirMenu():
    print("=" * 21, " MENU ", "=" * 21)
    print("\t[1]\tAdicionar Restaurantes")
    print("\t[2]\tListar Restaurantes")
    print("\t[3]\tAtualizar Restaurante")
    print("\t[4]\tExcluir Restaurante")
    print("\t[5]\tListar um Restaurante")
    print("\t[6]\tVOLTAR AO MENU INICIAL")
    print("=" * 50)
    
def moduloRestaurante():
    while True:
        exibirMenu()
        opcao = (input(">>> "))
        
        match(opcao):
            case "1" | "Adicionar Restaurante":
                adicionarRestaurante(arquivo)

            case "2" | "Listar Restaurantes":
                listarRestaurantes(arquivo)

            case "3" | "Atualizar Restaurante":
                atualizarRestaurante(arquivo)

            case "4" | "Excluir Restaurante":
                nomeRestaurante = input("Digite o nome do restaurante a ser exclúido: >>> ")
                excluirRestaurante(arquivo, nomeRestaurante)

            case "5" | "Buscar Restaurante":
                nomeRestaurante = input("Digite o nome do restaurante: >>> ")
                buscarRestaurante(arquivo, nomeRestaurante)

            case "6" | "Voltar":
                print("VOLTANDO AO MENU ANTERIOR...\n")
                sleep(2)
                break

            case _:
                print("Opção inválida. Tente novamente.")