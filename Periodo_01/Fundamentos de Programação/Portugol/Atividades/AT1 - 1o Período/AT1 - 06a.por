programa
{
	
	funcao inicio()
	{
		inteiro horas, totalPontos

		escreva("Quantas horas você gastou este mês para realização de atividades físicas? ")
		leia(horas)

		se(horas > 20){
			totalPontos = horas * 10
		}

		senao se(horas >= 10 e horas <= 20){
			totalPontos = horas * 5
		}

		senao{
			totalPontos = horas * 2
		}

		escreva("Parabéns, você obteve ", totalPontos, " neste mês!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 376; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */