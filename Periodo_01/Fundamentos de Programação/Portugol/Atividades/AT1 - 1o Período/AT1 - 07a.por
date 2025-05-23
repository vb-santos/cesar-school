programa
{
	
	funcao inicio()
	{
		caracter opcao
		real saque, saldoDisponivel=0, quantSaque
		inteiro fundos=1000

		escreva("Seu saldo bancário é de R$", fundos, ", gostaria de sacar? (S/N) ")
		leia(opcao)

		enquanto(opcao == 's' ou opcao == 'S'){
			escreva("Quanto você gostaria de sacar? R$")
			leia(quantSaque)

			se(quantSaque <= fundos){
				saldoDisponivel = fundos - quantSaque
				escreva("\nParabéns, você realizou com sucesso um saque de R$", quantSaque)
				escreva("\nSeu saldo atual é de R$", saldoDisponivel)
				fundos = fundos - quantSaque
			}

			senao{
				saldoDisponivel = fundos
				escreva("\nInfelizmente, você não pôde realizar o saque de R$", quantSaque)
				escreva("\nSeu saldo atual é de R$", saldoDisponivel)
			}

			escreva("\nVocê deseja sacar um novo valor? (S/N) ")
			leia(opcao)
		}

		escreva("Programa encerrado.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 803; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */