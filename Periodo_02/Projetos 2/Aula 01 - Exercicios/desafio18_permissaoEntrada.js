const pessoas = [
	{ nome: "Paula", idade: 12, altura: 1.8},
	{ nome: "João", idade: 20, altura: 1.3},
	{ nome: "Pedro", idade: 15, altura: 1.9},
	{ nome: "Luciano", idade: 22, altura: 1.8},
	{ nome: "Artur", idade: 10, altura: 1.2},
	{ nome: "Soter", idade: 70, altura: 1.9}
]

const alturaMinima = 1.5;
const idadeMinima = 14;
const idadeMaxima = 60;

function checarPermissaoTrue(array, idadeMax, idadeMin, alturaMin){
    return array.filter(pessoa =>
        pessoa.idade >= idadeMin 
        && pessoa.idade <= idadeMax
        && pessoa.altura >= alturaMin
    )
}

function checarPermissaoFalse(array, idadeMax, idadeMin, alturaMin){
    return array.filter(pessoa =>
        pessoa.idade < idadeMin 
        || pessoa.idade > idadeMax
        || pessoa.altura < alturaMin
    )
}

console.log(checarPermissaoTrue(pessoas, idadeMaxima, idadeMinima, alturaMinima));
console.log(checarPermissaoFalse(pessoas, idadeMaxima, idadeMinima, alturaMinima));
