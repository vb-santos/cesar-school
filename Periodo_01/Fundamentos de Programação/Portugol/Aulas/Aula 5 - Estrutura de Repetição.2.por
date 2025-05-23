programa
{
	
	funcao inicio()
	{
		inteiro opcao, quant
		real somaValor=0, valor
		caracter resposta

		escreva("Deseja fazer um pedido? (S/N): ")
		leia(resposta)

		enquanto(resposta != 'n' e resposta != 'N'){
			escreva("--Menu do Cinema--")
			escreva("\n100 - Pipoca 700g - R$20,00")
			escreva("\n101 - Refrigerante 500ml - R$9,30")
			escreva("\n102 - Chocolate 100g - R$5,50")
			escreva("\n103 - Água 500ml - R$2,00")
			
			escreva("\nQual produto deseja inserir ao carrinho?: ")
			leia(opcao)

			escolha(opcao){
				caso 100:
					escreva("\nVocê selecionou: Pipoca 700g")
					escreva("\nQuantos itens você deseja? ")
					leia(quant)
					valor = quant * 20
					somaValor = somaValor + valor
				pare

				caso 101:
					escreva("\nVocê selecionou: Refrigerante 500ml")
					escreva("\nQuantos itens você deseja? ")
					leia(quant)
					valor = quant * 9.3
					somaValor = somaValor + valor
				pare

				caso 102:
					escreva("\nVocê selecionou: Chocolate 100g")
					escreva("\nQuantos itens você deseja? ")
					leia(quant)
					valor = quant * 5.5
					somaValor = somaValor + valor
				pare

				caso 103:
					escreva("\nVocê selecionou: Água 500ml")
					escreva("\nQuantos itens você deseja? ")
					leia(quant)
					valor = quant * 2
					somaValor = somaValor + valor
				pare

				caso contrario:
					escreva("\nOpção Inválida!")
			}

			escreva("\nVocê deseja realizar um novo pedido? (S/N): ")
			leia(resposta)
		}

		escreva("\nO valor total da compra foi de: R$", somaValor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1134; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */