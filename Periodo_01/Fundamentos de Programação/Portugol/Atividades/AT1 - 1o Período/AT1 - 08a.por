programa
{
	
	funcao inicio()
	{
		inteiro contador, idade, somaIdade=0, mulheresAdultas=0, quantHomem=0, quantMulher=0, maiorIdade=0
		real mediaIdade, idadeSomada=0
		caracter sexo

		para(contador=1; contador<=5; contador++){
			escreva("Você é homem ou mulher? (M/F) ")
			leia(sexo)

			escreva("Qual a sua idade? ")
			leia(idade)

			se(sexo == 'M' ou sexo == 'm'){
				quantHomem++
			}

			se(sexo == 'F' ou sexo == 'f'){
				se(idade > maiorIdade){
					maiorIdade = idade
				}
			}

			idadeSomada = idadeSomada + idade

			se(sexo == 'F' ou sexo == 'f'){
				se(idade > 20){
					mulheresAdultas++
				}
			}

		}

		mediaIdade = idadeSomada/5

		se(quantHomem > 0){
			escreva("\nA quantidade de homens cadastrados foi de: ", quantHomem)
		}

		se(maiorIdade > 0){
			escreva("\nA idade da mulher mais velha é de: ", maiorIdade, " anos")
		}
		
		escreva("\nA média da idade do grupo de pesquisa é de: ", mediaIdade, " anos")

		se(mulheresAdultas > 0){
			escreva("\nO número de mulheres com mais de 20 anos é de: ", mulheresAdultas)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 274; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */