function numerosPares(N){
    let pares = [];
    for (let i = 0; i < N; i++){
        pares.push(i * 2);
    }
    
    return pares;
}

console.log(numerosPares(3));
console.log(numerosPares(5));