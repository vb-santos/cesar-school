var nome = "Victor";
var sobrenome = "Barbosa";
let idade = 17;
const dataNasc = "24/07/2006";

console.log(nome);
console.log(sobrenome);
console.log(idade);
console.log(dataNasc);
console.log("-------------------");

let a = 20;
let b = 15.3;
let c = "20";
let d = false;

console.log(a + b);
console.log(a - b);
console.log(a == c);
console.log(a === c);
console.log(!d);
console.log("-------------------");

var hora = data.getHours();

if(hora >= 0 || hora <= 11){
    console.log("Bom Dia!");
}
else if(hora >= 12 || hora <= 17){
    console.log("Boa Tarde!");
}
else{
    console.log("Boa Noite!");
};
console.log("-------------------");


let diasSemana = [
    "Segunda",
    "Terça",
    "Quarta",
    "Quinta",
    "Sexta",
    "Sábado",
    "Domingo",
];

let quantItens = (diasSemana.length) - 1;

for(let i = 0; i <= quantItens; i++){
    console.log(diasSemana[i])
};

console.log("-------------------");

let numeroPar = 0;

while(numeroPar <= 100){
    if(numeroPar % 2 == 0){
        console.log(numeroPar);
    }

    numeroPar++;
};

console.log("-------------------");

do{
    if(numeroPar % 2 == 0){
        console.log(numeroPar);
    }

    numeroPar++;
} while(numeroPar <= 100)
