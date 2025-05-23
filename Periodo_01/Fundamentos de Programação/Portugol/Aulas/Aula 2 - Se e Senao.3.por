programa
{
	
	funcao inicio()
	
	{
		real peso, distancia, frete=0, fretepeso=0
	
		escreva("Informe o peso da encomenda em KG: ")
		leia(peso)

		escreva("Informe a distância da entrega em KM: ")
		leia(distancia)

		se(distancia > 100){
			frete = (distancia * 2)
		}

		senao se(distancia <= 100 ){
			frete = (distancia * 1.5)
		}

			
		senao{
			escreva("Essa não é uma distância válida.")	
		}

		se(peso > 10){
			frete = frete + 5		
		}
		
		escreva("\nO valor do frete para ", distancia,"km e ", peso,"KG será de: R$", frete)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 448; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */