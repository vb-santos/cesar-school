programa
{
	inclua biblioteca Matematica --> math
	
	funcao inicio()
	{
		cadeia nome
		real nota1, nota2, nota3, media, arredondar

		escreva("Informe o seu nome: ")
		leia(nome)

		escreva("Insira sua primeira nota: ")
		leia(nota1)

		enquanto(nota1 > 10){
			escreva("\nEsta não é uma nota válida, por favor, insira novamente")
			escreva("\nInsira sua primeira nota: ")
			leia(nota1)
		}

		escreva("Insira sua segunda nota: ")
		leia(nota2)

		enquanto(nota2 > 10){
			escreva("\nEsta não é uma nota válida, por favor, insira novamente")
			escreva("\nInsira sua segunda nota: ")
			leia(nota2)
		}

		escreva("Insira sua terceira nota: ")
		leia(nota3)

		enquanto(nota3 > 10){
			escreva("\nEsta não é uma nota válida, por favor, insira novamente")
			escreva("\nInsira sua terceira nota: ")
			leia(nota3)
		}

		media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10
		arredondar = math.arredondar(media, 2)

		se(media >= 7){
			escreva("\nParabéns, você está aprovado ", nome, "!")
		}

		senao se(media >= 5 e media <= 6.9){
			escreva("\nVocê está de recuperação, boa sorte ", nome, "!")
		}

		senao{
			escreva("\nInfelizmente, você está reprovado ", nome, ".")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 795; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */