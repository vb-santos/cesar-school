programa
{
	
	funcao inicio()
	{
		inteiro quantFilho, quantMulheres=1, contFilho1=0, contFilho2=0

		enquanto(quantMulheres <= 10){
			escreva("Quantos filhos você tem? ")
			leia(quantFilho)
			quantMulheres++

			se(quantFilho > 2){
				contFilho1++
			}

			senao{
				contFilho2++	
			}
		}

		escreva("\nA quantidade de mulheres com até dois filhos é de: ", contFilho2)
		escreva("\nA quantidade de mulheres com mais de dois filhos é de: ", contFilho1)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 462; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */