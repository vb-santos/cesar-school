function dadosNumero(num1, num2){
    if(num1 > num2){
        maiorNum = num1;

        if(num1 % num2 === 0){
            divisivel = true;
        } else{
            divisivel = false;
        }

        diferenca = num1 - num2;

        let dados = {
            maiorNumero: maiorNum,
            maiorDivisivelporMenor: divisivel,
            diferenca: diferenca,
        }

        console.log(dados)
    }

    else if(num2 > num1){
        maiorNum = num2;

        if(num2 % num1 === 0){
            divisivel = true;
        } else{
            divisivel = false;
        }

        diferenca = num2 - num1;

        let dados = {
            maiorNumero: maiorNum,
            maiorDivisivelporMenor: divisivel,
            diferenca: diferenca,
        }

        console.log(dados)
    }

    else{
        console.log("Os números são iguais.");
    }
}

dadosNumero(30, 15);
dadosNumero(20, 40);
dadosNumero(30, 30);