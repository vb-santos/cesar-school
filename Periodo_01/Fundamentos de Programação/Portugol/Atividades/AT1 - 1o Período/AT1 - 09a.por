programa"
{
	
	funcao inicio()
	{
		inteiro numeroFatorial, numeroFatorial2, numeroFatorado=1, numeroFatorado2=1, fatorial
		caracter opcao

		escreva("Insira um número para ser fatorado ")
		leia(numeroFatorial)

		para(fatorial = 1; fatorial <= numeroFatorial; fatorial++){
			numeroFatorado = numeroFatorado * fatorial
		}
		
		escreva("O resultado da fatoração é igual a ", numeroFatorado)
		escreva("\nDeseja inserir um novo número para fatoração? (S/N) ")
		leia(opcao)

		enquanto(opcao == 's' ou opcao == 'S'){
			numeroFatorado2=1
			escreva("\nInsira um número para ser fatorado ")
			leia(numeroFatorial2)
			
			para(fatorial = 1; fatorial <= numeroFatorial2; fatorial++){
				numeroFatorado2 = numeroFatorado2 * fatorial
			}

			escreva("O resultado da fatoração é igual a ", numeroFatorado2)
			escreva("\nDeseja inserir um novo número para fatoração? (S/N) ")
			leia(opcao)
		}

		escreva("Programa encerrado, agradeçemos seu uso!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 952; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */