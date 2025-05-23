programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real salinicial, salfinal, acrescimo, ardsalfinal, ardacres
	
		escreva("Informe seu salário: R$")
		leia(salinicial)

		salfinal = salinicial * 1.1
		ardsalfinal = mat.arredondar(salfinal, 3)
		
		acrescimo = salfinal - salinicial
		ardacres = mat.arredondar(acrescimo, 3)
	
		escreva("\nSeu salário inicial era de: R$", salinicial)
		escreva("\nSeu salário final é: R$", ardsalfinal)
		escreva("\nO acréscimo obtido foi de: R$", ardacres)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 425; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */