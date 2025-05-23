let pessoas = [
	{ nome: "Pedro", idade: 20 },
	{ nome: "João", idade: 10 },
	{ nome: "Paula", idade: 12 },
	{ nome: "Artur", idade: 89 } 
];

function filtrarAdultos(array){
    return array.filter(pessoa => pessoa.idade >= 18);
}

function filtrarCriancasAdolescentes(array){
    return array.filter(pessoa => pessoa.idade < 18);
}

console.log(filtrarAdultos(pessoas));
console.log(filtrarCriancasAdolescentes(pessoas));