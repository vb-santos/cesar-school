programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro hentrada, mentrada, htentrada, hsaida, msaida, htsaida, htotal, desconto, cliente
		real taxa

		escreva("De que horas você chegou? ")
		leia (hentrada)

		escreva("Qual minuto você chegou? ")
		leia (mentrada)

		escreva("De que horas você saiu? ")
		leia (hsaida)

		escreva("Qual minuto você saiu? ")
		leia (msaida)

		htentrada = (hentrada * 60) + mentrada
		htsaida = (hsaida * 60) + msaida
		htotal = htsaida - htentrada

		se(htotal <= 60){
			taxa = 5
		}

		senao{
			taxa = (htotal - 60)*3 + 5
		}

		escreva("Quantas vezes você veio esse mês? ")
		leia (cliente)

		se(cliente >= 10){
			taxa = taxa * 0.8
		}

		escreva("O valor da taxa será de: ", taxa)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 698; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */