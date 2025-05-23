let promptArray = prompt("Insira os itens do array separados por vírgula: ");
let array = promptArray.split(',');
array = array.map(item => item.trim());

let arrayPares = array
.map(Number)
.filter(numeroArray => numeroArray % 2 === 0)
.map(numeroPar => numeroPar * numeroPar);

console.log(arrayPares);
