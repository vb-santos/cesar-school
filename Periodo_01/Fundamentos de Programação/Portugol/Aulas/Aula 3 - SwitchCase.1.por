programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
	
		inteiro num1, num2, opcao

		escreva("Informe o número 1: ")
		leia(num1)

		escreva("Informe o número 2: ")
		leia(num2)

		escreva("\nCalculadora Cesar")
		escreva("\n1 - Soma")
		escreva("\n2 - Multiplicação")
		escreva("\n3 - Subtração")
		escreva("\n4 - Divisão\n\n")
		leia(opcao)

		escolha(opcao){
			caso 1:
				escreva("\nA soma é: ", num1+num2)
			pare
			
			caso 2:
				escreva("\nA multiplicação é: ", num1*num2)
			pare

			caso 3:
				escreva("\nA subtração é: ", num1-num2)
			pare

			caso 4:
				escreva("\nA divisão é: ", num1/num2)
			pare

			caso contrario:
				escreva("\nOpção inválida.")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 254; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */