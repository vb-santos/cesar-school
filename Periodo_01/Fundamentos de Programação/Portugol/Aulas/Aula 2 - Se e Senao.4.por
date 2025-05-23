programa
{
	
	funcao inicio()
	{
	
		real multa=0, dias
	
		escreva("Há quantos dias foi feito o empréstimo: ")
		leia(dias)

		se(dias >= 0 e dias <= 7){
			multa = dias * 0.5
			escreva("\nO valor da multa será de: R$", multa)
		}

		senao se(dias >= 8 e dias <= 14){
			multa = dias * 1
			escreva("\nO valor da multa será de: R$", multa)
		}

		senao se(dias > 14){
			multa = dias * 2	
			escreva("\nO valor da multa será de: R$", multa)
		}

		senao{
			escreva("\nEssa não é uma data válida.")	
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 186; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */