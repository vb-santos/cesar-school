function segundoMaioreMenor(array){
    let maior = -Infinity;
    let segundoMaior = -Infinity;
    let menor = Infinity;
    let segundoMenor = Infinity;

    for(let numero of array){
        if(numero > maior){
            segundoMaior = maior;
            maior = numero;
        } else if(numero > segundoMaior && numero != maior){
            segundoMaior = numero;
        }

        if(numero < menor){
            segundoMenor = menor;
            menor = numero
        } else if(numero < segundoMenor && numero != menor){
            segundoMenor = numero
        }
    }

    return[segundoMaior, segundoMenor];
}

