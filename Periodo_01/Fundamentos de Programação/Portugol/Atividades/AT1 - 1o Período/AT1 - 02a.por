programa
{
	inclua biblioteca Matematica --> math
	
	funcao inicio()
	{
		real valorBolo, valorSalgado1, valorSalgado2, valorSalgado3, valorTotal, valorDividido, arredondar
		inteiro quantBolo, quantSalgado1, quantSalgado2, quantSalgado3

		escreva("Qual o valor do bolo perfeito? R$")
		leia(valorBolo)
		escreva("Quantos bolos serão encomendados? ")
		leia(quantBolo)
		
		escreva("\nQual o valor do primeiro tipo de salgado? R$")
		leia(valorSalgado1)
		escreva("Quantos salgados do primeiro tipo serão encomendados? ")
		leia(quantSalgado1)
		
		escreva("\nQual o valor do segundo tipo de salgado? R$")
		leia(valorSalgado2)
		escreva("Quantos salgados do segundo tipo serão encomendados? ")
		leia(quantSalgado2)
		
		escreva("\nQual o valor do terceiro tipo de salgado? R$")
		leia(valorSalgado3)
		escreva("Quantos salgados do terceiro tipo serão encomendados? ")
		leia(quantSalgado3)

		valorTotal = (valorBolo * quantBolo) + (valorSalgado1 * quantSalgado1) + (valorSalgado2 * quantSalgado2) + (valorSalgado3 * quantSalgado3)
		valorDividido = valorTotal/11
		arredondar = math.arredondar(valorDividido, 2)

		escreva("\nO valor total a ser pago será de R$", valorTotal)
		escreva("\nO valor a ser pago por cada um será de R$", arredondar)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1251; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */