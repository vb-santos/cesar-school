//Funções
function soma(x, y){
    return x + y;
};

function contador(inicio, fim){
    for (let i = inicio; i <= fim; i++){
        console.log(i);
    };
};

//Declarando variáveis
let num1 = parseInt(prompt("Informe o primeiro número: "));
let num2 = parseInt(prompt("Informe o segundo número: "));
let inicio = 0;
let fim = soma(num1, num2);

//Execução
contador(inicio, fim);

console.log("-------------------");

// Função anônima

let x = function (x, y) {
    return x + y;
};

console.log(x(2,3));

console.log("-------------------");

// Função de seta

// Após a seta pode haver {} para passar as determinações da função
let somaSeta = (a, b) => a + b;
console.log(somaSeta(4, 5))

console.log("-------------------");

let subtrair = (x, y) => x-y
//Funçção de seta (arrow) para dividir um número por outro

let dividir = (x, y) => {
    if (y === 0) {
        return "Erro: Divisão por zero!";
    } else {
        return x / y;
    }
};

//Funçção de seta (arrow) para converter milissegundos em ano
let milissegundosEmUmAno = () => 1000 * 3600 * 24 * 365.25;

let calcularIdade = (dataNascimento) => {
    let dataAtual = new Date(); // Obtendo a data atual
    let dataNasc = new Date(dataNascimento); // Convertendo a data de nascimento
    let diferenca = Math.abs(subtrair(dataAtual.getTime(), dataNasc.getTime())); // Calcular a diferença em milissegundos
    let idade = Math.floor(dividir(diferenca, milissegundosEmUmAno())); // Convertendo a idade

    console.log('A pessoa tem ' + idade + ' anos de idade.'); // Exibindo a idade em anos
};

// Invocando a função calcularIdade com a data de nascimento 24/07/2006
calcularIdade("2006-07-24");