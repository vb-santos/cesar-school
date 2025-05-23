const array = [1, 2, 3, 4, 5, 6]

function arrayDobrado(array){
    let arrayDobro = [];

    for(let numero of array){
        numero *= 2;
        arrayDobro.push(numero);
    }

    return arrayDobro;
}

function arrayDobradoString(array){
    let arrayDobroString = [];

    for(let numero of array){
        let dobro = numero * 2;
        numeroString = dobro.toString();
        arrayDobroString.push(numeroString);  
    }

    return arrayDobroString;
}

function arrayParOuImpar(array){
    let arrayParImpar = [];

    for(let numero of array){
        if(numero % 2 === 0){
            resultado = `${numero} é par`;
            arrayParImpar.push(resultado);
        }

        else{
            resultado = `${numero} é impar`;
            arrayParImpar.push(resultado);
        }
    }

    return arrayParImpar;
}

console.log(arrayDobrado(array))
console.log(arrayDobradoString(array))
console.log(arrayParOuImpar(array))