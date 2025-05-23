programa
{
	
	funcao inicio()
	{
		inteiro idade, somaIdade=0
		caracter opcao
		
		escreva("Informe a idade cliente --->> ")
		leia(idade)

		somaIdade = somaIdade + idade

		escreva("\nDeseja  inserir a idade de outro cliente? (s/n)")
		leia(opcao)

		enquanto (opcao != 'n'){
			escreva("\nInforme a idade do Cliente --->> ")
			leia(idade)
			somaIdade = somaIdade + idade

			escreva("\nDeseja inserir a idade de outro cliente? (s/n) ")
			leia(opcao)
		}

		escreva("\nA soma das idades do Cliente é: ", somaIdade)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 240; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */