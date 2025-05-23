function criaRetangulo(lado1, lado2){
    let obj = {
        largura: lado1,
        altura: lado2,
        perimetro: (2 * (lado1 + lado2)),
        area: lado1 * lado2
    }

    return obj;
}

retangulo1 = criaRetangulo(2, 4);

console.log(retangulo1);