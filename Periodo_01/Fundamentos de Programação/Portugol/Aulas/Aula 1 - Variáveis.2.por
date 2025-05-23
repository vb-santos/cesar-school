programa
{
	
	inclua biblioteca Matematica --> mat
	
	funcao inicio(){
		
		real peso, altura, imc, arredonda
		
		escreva("Informe seu peso em KG: ")
		leia(peso)

		escreva("Informe sua altura em metros: ")
		leia(altura)

		imc = peso/(altura*altura)
		
		arredonda = mat.arredondar(imc, 3)

		escreva("\nO valor do seu imc é: ", arredonda)

	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 312; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */