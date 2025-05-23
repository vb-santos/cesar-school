let contas = [
    { cliente: "João", saldoTotal: 1000, compras: [100, 200, 300] },
    { cliente: "Paula", saldoTotal: 7500, compras: [200, 1040] },
    { cliente: "Pedro", saldoTotal: 10000, compras: [5140, 6100, 100, 2000] },
    { cliente: "Luciano", saldoTotal: 100, compras: [100, 200, 1700] },
    { cliente: "Artur", saldoTotal: 1800, compras: [200, 300] },
    { cliente: "Soter", saldoTotal: 1200, compras: [] }
];

function atualizarSaldo(contas){
    contas.forEach(conta => {
        let totalCompras = conta.compras.reduce((total, valor) => total + valor, 0);
        conta.saldoTotal -= totalCompras;
    });

    return contas;
}

let contasAtualizadas = atualizarSaldo(contas);
console.log(contasAtualizadas);