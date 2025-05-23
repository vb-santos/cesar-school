programa
{
	
	funcao inicio()
	{
		real altura, alturaMulher=0, somaAltMulher=0, alturaHomem=0, somaAltHomem=0, mediaHomem, mediaMulher, maiorAltura=0, menorAltura=0
		inteiro participante, quantMulher=0, quantHomem=0
		caracter sexo

		para(participante = 1; participante <= 5; participante++){
			escreva("Qual a sua altura em metros? (EX: 1.75): ")
			leia(altura)

			se(participante == 1){
				maiorAltura = altura
				menorAltura = altura
			}

			se(altura > maiorAltura){
				maiorAltura = altura
			}

			se(altura < menorAltura){
				menorAltura = altura
			}

			escreva("Com que gênero você se identifica? (M/F): ")
			leia(sexo)

			escreva("\n")
			se(sexo == 'F' ou sexo == 'f'){
				alturaMulher = altura
				somaAltMulher = somaAltMulher + alturaMulher
				quantMulher++
			}

			senao se(sexo == 'M' ou sexo == 'm'){
				alturaHomem = altura
				somaAltHomem = somaAltHomem + alturaHomem
				quantHomem++
			}

			senao{
				escreva("Resposta Inválida!")
			}
		}
		
		mediaHomem = somaAltHomem / quantHomem
		mediaMulher = somaAltMulher / quantMulher

		se(quantMulher >= 1 e quantHomem >= 1){
			escreva("\nA média de altura entre as mulheres é de: ", mediaMulher, "m, a quantidade de mulheres foi de: ", quantMulher)
			escreva("\nA média de altura entre os homens é de: ", mediaHomem, "m, a quantidade de homens foi de: ", quantHomem)
			escreva("\nA maior altura entre os pesquisados foi de: ", maiorAltura, "m")
			escreva("\nA menor altura entre os pesquisados foi de: ", menorAltura, "m")
		}

		senao se(quantMulher >= 1){
			escreva("\nA média de altura entre as mulheres é de: ", mediaMulher, "m, a quantidade de mulheres foi de: ", quantMulher)
			escreva("\nA maior altura entre os pesquisados foi de: ", maiorAltura, "m")
			escreva("\nA menor altura entre os pesquisados foi de: ", menorAltura, "m")
		}

		senao se(quantHomem >= 1){
			escreva("\nA média de altura entre os homens é de: ", mediaHomem, "m, a quantidade de homens foi de: ", quantHomem)
			escreva("\nA maior altura entre os pesquisados foi de: ", maiorAltura, "m")
			escreva("\nA menor altura entre os pesquisados foi de: ", menorAltura, "m")
		}

		senao{
			escreva("\nErro na pesquisa!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2148; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */