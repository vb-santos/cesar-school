programa
{
	
	funcao inicio()
	{
		real valorInv=0, taxaJurosPorc, taxaJuros
		inteiro contador, quantAnos
		caracter opcao

		escreva("Insira o valor inicial do investimento: R$")
		leia(valorInv)

		escreva("Quantos anos deseja deixar o seu investimento ativo? ")
		leia(quantAnos)

		escreva("Qual a taxa de juros ao ano oferecida pelo banco? Em porcentagem: ")
		leia(taxaJurosPorc)

		taxaJuros = taxaJurosPorc/100

		para(contador = 1; contador <= quantAnos; contador++){
			valorInv = valorInv + (valorInv*taxaJuros)
			escreva("\nA quantidade total no ", contador, "º ano é de: R$", valorInv)
		}

		escreva("\n\nDeseja realizar uma nova simulação? (S/N) ")
		leia(opcao)

		enquanto(opcao == 'S' ou opcao == 's'){
			escreva("Insira o valor inicial do investimento: R$")
			leia(valorInv)
	
			escreva("Quantos anos deseja deixar o seu investimento ativo? ")
			leia(quantAnos)
	
			escreva("Qual a taxa de juros ao ano oferecida pelo banco? Em porcentagem:")
			leia(taxaJurosPorc)
	
			taxaJuros = taxaJurosPorc/100
	
			para(contador = 1; contador <= quantAnos; contador++){
				valorInv = valorInv + (valorInv*taxaJuros)
				escreva("\nA quantidade total no ", contador, "º ano é de: R$", valorInv)
			}

			escreva("\n\nDeseja realizar uma nova simulação? (S/N) ")
			leia(opcao)
		}

		escreva("Programa Encerrado.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 605; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */