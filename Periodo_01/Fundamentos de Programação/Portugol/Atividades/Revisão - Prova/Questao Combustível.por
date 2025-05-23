programa
{
	
	funcao inicio()
	{
		inteiro opcao, qntAlcool=0, qntGasolina=0, qntDiesel=0

		escreva("--- Com qual tipo de combustível deseja abastecer? ---")
		escreva("\n1 - Álcool")
		escreva("\n2 - Gasolina")
		escreva("\n3 - Diesel")
		escreva("\n4 - Fim\n")
		leia(opcao)

		escolha(opcao){
			caso 1:
				escreva("\nO combustível escolhido foi o Álcool\n")
				qntAlcool++
			pare

			caso 2:
				escreva("\nO combustível escolhido foi a Gasolina\n")
				qntGasolina++
			pare

			caso 3:
				escreva("\nO combustível escolhido foi o Diesel\n")
				qntDiesel++
			pare

			caso 4:
				escreva("\nMuito obrigado!")
			pare

			caso contrario:
				enquanto(opcao > 4 ou opcao < 1){
					escreva("Insira um número válido! ")
					leia(opcao)
				}

				escolha(opcao){
					caso 1:
						escreva("\nO combustível escolhido foi o Álcool\n")
						qntAlcool++
					pare
		
					caso 2:
						escreva("\nO combustível escolhido foi a Gasolina\n")
						qntGasolina++
					pare
		
					caso 3:
						escreva("\nO combustível escolhido foi o Diesel\n")
						qntDiesel++
					pare
						
					caso 4:
						escreva("\nMuito obrigado!")
					pare
					}
			pare
		}

		enquanto(opcao != 4){
			escreva("\n--- Insira outro combustível ou finalize o programa ---")
			escreva("\n1 - Álcool")
			escreva("\n2 - Gasolina")
			escreva("\n3 - Diesel")
			escreva("\n4 - Fim\n")
			leia(opcao)
	
			escolha(opcao){
				caso 1:
					escreva("\nO combustível escolhido foi o Álcool\n")
					qntAlcool++
				pare
	
				caso 2:
					escreva("\nO combustível escolhido foi a Gasolina\n")
					qntGasolina++
				pare
	
				caso 3:
					escreva("\nO combustível escolhido foi o Diesel\n")
					qntDiesel++
				pare
	
				caso 4:
					escreva("\nMuito obrigado!")
				pare
	
				caso contrario:
					enquanto(opcao > 4 ou opcao < 1){
						escreva("Insira um número válido! ")
						leia(opcao)
					}
	
					escolha(opcao){
						caso 1:
							escreva("\nO combustível escolhido foi o Álcool\n")
							qntAlcool++
						pare
			
						caso 2:
							escreva("\nO combustível escolhido foi a Gasolina\n")
							qntGasolina++
						pare
			
						caso 3:
							escreva("\nO combustível escolhido foi o Diesel\n")
							qntDiesel++
						pare
							
						caso 4:
							escreva("\nMuito obrigado!")
						pare
						}
				pare
			}
		}

		se(qntAlcool >= 1){
			escreva("\nA quantidade de pessoas que optou pelo Álcool como combustível foi de: ", qntAlcool)
		}

		se(qntGasolina >= 1){
			escreva("\nA quantidade de pessoas que optou pela Gasolina como combustível foi de: ", qntGasolina)
		}

		se(qntDiesel >= 1){
			escreva("\nA quantidade de pessoas que optou pelo Diesel como combustível foi de: ", qntDiesel)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2669; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */