programa
{

	inclua biblioteca Matematica --> mat

	
	funcao inicio(){
		
		real cel, fah, arredonda

		escreva("Digite o valor da temperatura em Celsius: ")
		leia(cel)

		fah = (1.8*cel)+32

		arredonda = mat.arredondar(fah, 3)

		escreva("O valor da temperatura em fahrenheit é: ", arredonda)
		
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 294; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */