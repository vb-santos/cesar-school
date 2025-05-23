programa
{
	inclua biblioteca Matematica --> math
	
	funcao inicio()
	{
		real peso, altura, arredondar, imc

		escreva("Informe seu peso em KG ")
		leia(peso)

		escreva("Informe a sua altura em metros ")
		leia(altura)

		imc = peso/(altura*altura)

		se(imc < 18.5){
			escreva("\nVocê está abaixo do peso")
		}

		senao se(imc >= 18.5 e imc < 25){
			escreva("\nVocê está no peso ideal, parabéns!")
		}

		senao se(imc >= 25 e imc < 30){
			escreva("\nVocê está entrando em sobrepeso.")
		}

		senao se(imc >= 30 e imc < 40){
			escreva("\nVocê está com obesidade, tome cuidado.")
		}

		senao{
			escreva("\nProcure ajuda, você está com obesidade mórbida!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 616; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */