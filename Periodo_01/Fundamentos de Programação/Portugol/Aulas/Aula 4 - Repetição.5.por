programa
{
	
	funcao inicio()
	{
		real valorCompra, valorCompra2, quantItens, quantItens2, valorFinal, valorFinal2
		inteiro opcao1

		escreva("Informe o valor total da compra: R$")
		leia(valorCompra)

		escreva("Informe o número de itens comprado: ")
		leia(quantItens)


		 faca{
		 	valorFinal = valorCompra * 0.95

		 	se(quantItens > 10){
		 		valorFinal = valorCompra * 0.9
		 	}

		 	senao se(quantItens <= 5){
		 		valorFinal = valorCompra
		 	}
		 } enquanto(quantItens > 5 e quantItens <= 10)

		escreva("O valor final é de: R$", valorFinal, "\n")


		escreva("\nDeseja calcular outro valor?")
		escreva("\n1 - Calcular novamente")
		escreva("\n2 - Encerrar programa\n")
		leia(opcao1)
	
		faca{
			escreva("\nInforme o valor total da compra: R$")
			leia(valorCompra2)
	
			escreva("Informe o número de itens comprado: ")
			leia(quantItens2)
	
			se(quantItens2 > 5 e quantItens2 <= 10){
				valorFinal2 = valorCompra2 * 0.95
			}

			senao se(quantItens2 > 10){
				valorFinal2 = valorCompra2 * 0.90
			}

			senao{
				valorFinal2 = valorCompra
			}
	
			escreva("\nO valor final é de: R$", valorFinal2, "\n")
			escreva("Deseja calcular outro valor? (1 - Sim /2 - Não)\n")
			leia(opcao1)
		} enquanto(opcao1 == 1)

		se(opcao1 == 2){
			escreva("Programa encerrado")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 757; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */