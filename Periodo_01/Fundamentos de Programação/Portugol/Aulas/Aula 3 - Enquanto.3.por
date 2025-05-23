programa
{
	
	funcao inicio()
	{
		inteiro qtd = 0
		caracter resposta

		escreva("Você gosta de futebol? Responda com s para sim e n para não ")
		leia(resposta)

		enquanto(resposta != 'n'){
			qtd = qtd + 1
			escreva("Você gosta de futebol? Responda com s para sim e n para não ")
			leia(resposta)
		}

		escreva("\nA quantidade de pessoas que gostam de futebol é: ", qtd)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 321; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */