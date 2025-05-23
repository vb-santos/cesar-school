programa
{
	
	funcao inicio(){
		inteiro idade
		
		escreva("Informe sua idade: ")
		leia (idade)


		se (idade < 0 ou idade > 130){
			escreva("\nSua idade não é verdadeira!")
		}
			senao{
				se (idade >= 18){
					escreva("\nVocê é de maior, já pode acessar o site!")
				}

				se (idade < 18){
					escreva("\nInfelizmente, você é de menor")
				}
			}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 369; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */