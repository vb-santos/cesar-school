programa
{
	
	funcao inicio()
	{
		real anosImovel

		escreva("Quantos anos tem o seu imóvel? ")
		leia(anosImovel)

		se(anosImovel <= 10){
			escreva("\nSeu imóvel é novo!")
		}

		senao se(anosImovel >= 11 e anosImovel <= 30){
			escreva("\nSeu imóvel é moderadamente antigo.")
		}

		senao{
			escreva("\nSeu imóvel é antigo.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 314; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */