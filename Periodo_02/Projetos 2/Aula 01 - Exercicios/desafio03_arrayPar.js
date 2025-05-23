arrayNumeros = [1, 2, 3, 4, 5, 6];

function arrayPar(array){
    let arrayPar = array
    .map(Number)
    .filter(numeroPar => numeroPar % 2 === 0)
    .map(numeroPar => numeroPar);

    console.log(arrayPar);
}

arrayPar(arrayNumeros);