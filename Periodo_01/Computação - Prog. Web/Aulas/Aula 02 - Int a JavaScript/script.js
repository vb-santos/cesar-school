const data = new Date();

/*  Objetos Date() JavaScript nos permitem trabalhar com datas.
    Por padrão, o JavaScript usará o fuso horário do navegador e exibirá uma data como uma string de texto
    completo.
    Exemplo:
    Sex Fev 24 2023 14:21:53 GMT-0300 (Horário Padrão de Brasília) */

console.log(data.getFullYear());
console.log(data.getMonth());
console.log(data.getDate());
console.log(data.getDay());
console.log(data.getHours());
console.log(data.getMinutes());
console.log(data.getSeconds());
console.log(data.getMilliseconds());
console.log(data.getTime());
console.log("-------------------")

// Arrays
const alunos = ["Ana", "Maria", "João", "Paulo"];

// Adicionar itens
alunos[4] = "Tereza";
console.log(alunos);
console.log(alunos.length); // Quant de itens
console.log("-------------------")

alunos.forEach(aluno => {
    console.log(aluno); // Listar um por um dos itens da lista
});
console.log("-------------------")

// Converter arrays em strings
const frutas = ['Maçã', 'Laranja', 'Melão', 'Banana', 'Pera'];
console.log(frutas.toString());
console.log(frutas.join(" - ")); // Lista com o determinado caractere entre os itens
console.log("-------------------")

// Remover itens
let ultimaFruta = frutas.pop(); // Remove o último elemento
console.log(frutas);
console.log(ultimaFruta);
console.log("-------------------")

// Construção de objetos em JS

const Cachorro = {
    nome: "Scooby",
    idade: 5,
    raca: "Vira-Lata",
    cor: "Caramelo",
    saudavel: true,

    // Métodos de objetos
    latir: ()=>{
        console.log("Au au");
    },

    comer: ()=>{
        console.log("Schomp schomp");
    },

    dormir:()=>{
        console.log("Zzzzz");
    },
};

console.log(Cachorro);
console.log(Cachorro.nome);
console.log(Cachorro.raca);
console.log(Cachorro.cor);
console.log("-------------------")
Cachorro.latir()
Cachorro.comer()
Cachorro.dormir()
console.log("-------------------")

// Alterar elementos no HTML
document.getElementById("txtNome").value = "Digite aqui"