let numero = 5;

function checarNumero(){
    if(numero === 0){
        console.log("O número informado é neutro.");
    } else if(numero > 0){
        console.log("O número informado é positivo.");
    } else{
        console.log("O número informado é negativo.");
    }
};

checarNumero();

console.log("-------------------");

function checarMes(mes){
    switch(mes){
        case 1:
            console.log("O mês é Janeiro");
            break;
        case 2:
            console.log("O mês é Fevereiro");
            break;
        // ...
        case 6:
            console.log("O mês é Junho");
            break;
        // ...
        case 12:
            console.log("O més é Dezembro");
            break;
        default:
            console.log("Mês inválido");
            break;
    };
};

checarMes(6);

console.log("-------------------");

for(let i = 0 ; i <= 10; i++){
    if(i % 2 === 0){
        console.log(i);
    }
};

console.log("-------------------");
let numeroContador = 0;

while(numeroContador <= 10){
    if(numeroContador % 2 === 0){
        console.log(numeroContador);
    }
    numeroContador++;
}

console.log("-------------------");

let numeroSoma = 1;
let somaTotal = 0;

do{
    somaTotal += numeroSoma;
    numeroSoma++;

} while(numeroSoma <= 5);

console.log(somaTotal);

console.log("-------------------");

let alunos = ["João", "Maria", "Pedro", "Ana", "Luiza"];

for (let indice in alunos){
    console.log(indice);
};
// Percorre as propriedades enumeráveis de um objeto, em um array, é o índice

for (let aluno of alunos){
    console.log(aluno);
};
// Percorre os valores iteráveis, no caso de um array, itera sobre os elementos

console.log("-------------------");

let dataInicial = new Date("2007-03-11");
let dataFinal = new Date("2024-06-05");

diferencaEmMilissegundos = dataFinal.getTime() - dataInicial.getTime();
diferencaEmDias = diferencaEmMilissegundos / (1000 * 3600 * 24);

console.log(`A diferença entre dias é de ${diferencaEmDias}.`); // Exibindo a idade em anos