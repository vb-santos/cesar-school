programa
{
	inclua biblioteca Matematica --> math
	
	funcao inicio()
	{
		real valorTotal1, parcela2, valorTotal2, arredondar2, parcela3, valorTotal3, arredondar3, valorBolsa
		inteiro jurosCont

		escreva("Insira o valor da bolsa, Dona Maria: R$")
		leia(valorBolsa)

		valorTotal1 = valorBolsa * 0.9

		valorTotal2 = valorBolsa
		parcela2 = valorTotal2/3
		arredondar2 = math.arredondar(parcela2, 2)


		valorTotal3 = valorBolsa * 1.05
		parcela3 = valorTotal3/10
		arredondar3 = math.arredondar(parcela3, 2)

		escreva("\nDe acordo com nosso sistema, você tem as seguintes possibilidades:\n")
		escreva("\nPagando à vista você receberá um desconto de 10%, resultando no valor de R$", valorTotal1)
		escreva("\nParcelando em 3 vezes, você não terá desconto, resultando no valor de R$", valorTotal2, " e em 3x parcelas de R$", arredondar2)
		escreva("\nParcelando em 10 vezes, você terá um acréscimo de 5%, resultando no valor de R$", valorTotal3, " e em 10x parcelas de R$", arredondar3)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 685; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */