programa
{
	
	funcao inicio()
	{
		real distancia, distancia2, preco, preco2, precoFinal, precoFinal2, combustivelTotal, combustivelTotal2, desconto, desconto2
		inteiro opcao, opcao2, opcao3, consumo=0, consumo2=0


		escreva("Qual a distância a ser percorrida em KM?: ")
		leia(distancia)

		escreva("Quanto custa o litro do combutível? R$")
		leia(preco)

		escreva("--Calculadora de viagens--")
		escreva("\n1- Carro")
		escreva("\n2- Caminhão")
		escreva("\n3- Ônibus\n")
		
		escreva("Selecione um dos tipos de veículos: ")
		leia(opcao)

		escolha(opcao){
			caso 1:
				consumo = 2
			pare

			caso 2:
				consumo = 4
			pare

			caso 3:
				consumo = 6
			pare

			caso contrario:
				escreva("Opção Inválida!\n")
		}
		
		combustivelTotal = distancia * consumo
		escreva("\nA quantidade necessária de combustível é de: ", combustivelTotal, "L")

		precoFinal = preco * combustivelTotal
		escreva("\nO preço total do combustível é de: R$", precoFinal)

		desconto = precoFinal * 0.9
		escreva("\nO preço sem desconto é de R$", precoFinal, " enquanto o preço com desconto é de R$", desconto, "\n")

		escreva("\nDeseja calcular outro valor?")
		escreva("\n1 - Calcular novamente")
		escreva("\n2 - Encerrar programa\n")
		leia(opcao3)
	
		faca{
			escreva("Qual a distância a ser percorrida em KM?: ")
			leia(distancia2)
	
			escreva("Quanto custa o litro do combutível? R$")
			leia(preco2)
	
			escreva("--Calculadora de viagens--")
			escreva("\n1- Carro")
			escreva("\n2- Caminhão")
			escreva("\n3- Ônibus\n")
			
			escreva("Selecione um dos tipos de veículos: ")
			leia(opcao2)
	
			escolha(opcao2){
				caso 1:
					consumo2 = 2
				pare
	
				caso 2:
					consumo2 = 4
				pare
	
				caso 3:
					consumo2 = 6
				pare
	
				caso contrario:
					escreva("Opção Inválida!\n")
			}
			
			combustivelTotal2 = distancia2 * consumo2
			escreva("\nA quantidade necessária de combustível é de: ", combustivelTotal2, "L")
	
			precoFinal2 = preco2 * combustivelTotal2
			escreva("\nO preço total do combustível é de: R$", precoFinal2)
	
			desconto2 = precoFinal2 * 0.9
			escreva("\nO preço sem desconto é de R$", precoFinal2, " enquanto o preço com desconto é de R$", desconto2, "\n")

			escreva("\nDeseja calcular outro valor? (1 - Sim /2 - Não)\n")
			leia(opcao3)
		} enquanto (opcao3 == 1)

		se(opcao3 == 2){
			escreva("Programa encerrado")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1109; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */