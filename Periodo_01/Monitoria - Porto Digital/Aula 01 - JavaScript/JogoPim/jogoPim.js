let numeroEscolhido = parseInt(prompt("Escolha um número!"))

let numeroFinal = numeroEscolhido * 10

for(let i = 1; i <= numeroFinal; i = i + 1){
    if(i % numeroEscolhido == 0){
        document.write("PIM")
    } else {
        document.write(i + " ")
    }
}