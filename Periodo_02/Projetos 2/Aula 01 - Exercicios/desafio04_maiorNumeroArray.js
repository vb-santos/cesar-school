arrayA = [10, 30, 20, 25, 14];

function maiorNumero(array){
    numeroAtual = array[0];
    for(numero of array){
        if(numero > numeroAtual){
            numeroAtual = numero;
        }
    }
    console.log(numeroAtual);
}

maiorNumero(arrayA);