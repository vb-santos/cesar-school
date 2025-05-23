programa
{
	
	funcao inicio()
	{
		inteiro velocidade, velocidade_acima, multa

		escreva("Informe a velocidade do veículo: ")
		leia(velocidade)

		se(velocidade > 80 e velocidade < 100){
			velocidade_acima = velocidade - 80
			multa = 5 * velocidade_acima

			escreva("\nVocê ultrapassou o limite de velocidade!")
			escreva("\nSua multa foi de: R$", multa)
		}

		senao se(velocidade >= 100){
			velocidade_acima = velocidade - 80
			multa = velocidade_acima * 10

			escreva("\nVocê ultrapassou o limite de velocidade!")
			escreva("\nSua multa foi de: R$", multa)
		}

		senao se(velocidade < 0){
			escreva("Esta não é uma velocidade verdadeira")
		}
		
		senao{
			escreva("\nO limite de velocidade não foi ultrapassado!")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 601; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */