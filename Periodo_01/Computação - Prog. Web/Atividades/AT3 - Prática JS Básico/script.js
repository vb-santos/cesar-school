// let nome = prompt("Informe seu nome por favor!");
// console.log(`Compras de ${nome}`);

var produto1 = "Shampoo";
var marcaProduto1 = "Seda";
var precoProduto1 = 7.50;

// console.log(`Uma cliente chamada ${nome} comprou um ${produto1} da marca ${marcaProduto1} por R$ ${precoProduto1}`);

// console.log("-------------------")

var produto2 = "Condicionador";
var marcaProduto2 = "Pantene";
var precoProduto2 = 16.25;
var maisCaro = precoProduto2 > precoProduto1;
// console.log(maisCaro);

// console.log("-------------------")

var totalDaCompra = precoProduto1 + precoProduto2;
var extrato = `Compras de Maria
-------------------
Produto 1: ${produto1}
Marca: ${marcaProduto1}
Preço: ${precoProduto1}
-------------------
Produto 2: ${produto2}
Marca: ${marcaProduto2}
Preço: ${precoProduto2}
-------------------
Total da compra: R$${totalDaCompra}
`;

// console.log(extrato)

const taxaImposto = 0.1;
const taxaFrete = 0.15;

var imposto = taxaImposto * totalDaCompra;
var frete = taxaFrete * totalDaCompra;

var totalFinal = totalDaCompra + frete + imposto;

var extratoFinal = extrato + `-------------------
Imposto: ${imposto}
Frete: ${frete}
-------------------
Total da compra após imposto e frete: R$${totalFinal}
`

console.log(extratoFinal)