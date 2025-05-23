const booleano1 = true
const booleano2 = false
const booleano3 = !booleano2 
const booleano4 = !booleano3

function resultados(){
    let respostas = [];
    resultadoExp = booleano1 && booleano2 && !booleano4;
    respostas.push(resultadoExp);

    resultadoExp = (booleano1 && booleano2) || !booleano3;
    respostas.push(resultadoExp);

    resultadoExp = (booleano2 || booleano3) && (booleano4 || booleano1);
    respostas.push(resultadoExp);

    resultadoExp = !(booleano2 && booleano3) || !(booleano1 && booleano3);
    respostas.push(resultadoExp);

    resultadoExp = !(booleano1) && !(booleano3) || (!booleano4 && booleano3 && booleano3);
    respostas.push(resultadoExp);

    return respostas;
}

console.log(resultados());