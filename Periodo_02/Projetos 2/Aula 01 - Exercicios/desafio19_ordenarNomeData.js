const consultas = [
    { nome: "João", dataDaConsulta: "01/10/2021" },
    { nome: "Pedro", dataDaConsulta: "02/07/2021" },
    { nome: "Paula", dataDaConsulta: "03/11/2021" },
    { nome: "Márcia",  dataDaConsulta: "04/05/2021" }
]
  
function ordenarPorNome(array){
    return array.sort((a, b) => a.nome.localeCompare(b.nome));
}

function ordenarPorData(array){
    return array.sort((a, b) => {
        let dataA = new Date(a.dataDaConsulta.split('/').reverse().join('-'));
        let dataB = new Date(b.dataDaConsulta.split('/').reverse().join('-'));

        return dataA.getTime() - dataB.getTime();
    })
}

console.log(ordenarPorNome(consultas));
console.log(ordenarPorData(consultas));