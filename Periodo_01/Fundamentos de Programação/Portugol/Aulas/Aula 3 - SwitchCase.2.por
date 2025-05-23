programa
{
	
	funcao inicio()
	{
		inteiro num1,opcao,num2

          escreva("Escolha seu produto")
		escreva("\n1 - bateria")
		escreva("\n2 - pneu")
		escreva("\n3 - filtro de óleo")
		escreva("\n4 - Pastilhas de freio\n")

 		leia(opcao)
		escreva("\ninforme a quantidade do produto: ")
		leia(num1)

		 
			escolha(opcao){
			  	caso 1:
			  		num1 = num1*200
				pare
			  
			  	caso 2:
			  		num1 = num1*350
				pare
			  
			  	caso 3:
			  		num1 = num1*20
				pare
			
			  	caso 4:
			  		num1 = num1*100
			 	pare
			 	caso contrario:
			 		escreva("opção inválida")
		 		
		  	}
		  escreva("\nO valor foi R$",num1)
		  
		  caracter continua 
		  escreva("\nVoce deseja continuar comprando? digite s para continuar e n para parar\n")
		  leia(continua)
		  
		  enquanto(continua != 'n'){
			inteiro op
		     escreva("Escolha seu produto")
		 	escreva("\n1 - bateria")
		  	escreva("\n2 - pneu")
		  	escreva("\n3 - filtro de óleo")
		  	escreva("\n4 - Pastilhas de freio\n")
			leia(op)
			
			escreva("\ninforme a quantidade do produto: ")
		 	leia(num2)
		 	
		  	 escolha(op){
		  	caso 1:
		  		 num2 = num2*200
			pare
		  
		  	caso 2:
		  		num2 = num2*350
			pare
		  
		  	caso 3:
		  		num2 = num2*20
			pare
		
		  	caso 4:
		  		num2 = num2*100
		 	pare
		 	caso contrario:
		 		escreva("opção inválida")
		  }
		  	
		  	num1 = num1+num2
		  	escreva("Você quer continuar? digite s para continuar e n para parar")
		  	leia(continua)
		  	
		  }
		  escreva("\nO total foi: ",num1)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 476; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */