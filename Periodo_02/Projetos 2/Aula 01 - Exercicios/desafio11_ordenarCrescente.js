let arrayNumeros = [10, 5, 3, 10, 2, 1];

function ordenarCrescente(array){
    return array.sort((a, b) => a - b);
}

console.log(ordenarCrescente(arrayNumeros));