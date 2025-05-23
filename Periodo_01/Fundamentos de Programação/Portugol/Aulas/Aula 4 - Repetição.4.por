programa
{
	
	funcao inicio(){
		caracter resposta
		inteiro contador=0

			faca{
				escreva("Você gosta de futebol? (s/n) ")
				leia(resposta)

				se(resposta == 's'){
					contador = contador + 1
				}
			} enquanto(resposta == 's')

			escreva("\nO número de pessoas que gostam de futebol é: ", contador)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 303; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */