function filmeFavorito(){
    return {
        nome: "O Diabo Veste Prada",
        ano: 2006,
        diretor: "David Frankel",
        atores: ["Meryl Sheep", "Anne Hathaway", "Emily Blunt", "Stanley Tucci"]
    }
}

filme = filmeFavorito();

console.log(`Venha assistir ao filme ${filme.nome}, de ${filme.ano}, dirigido por ${filme.diretor} e estrelado por ${filme.atores[0]}, ${filme.atores[1]}, ${filme.atores[2]}, ${filme.atores[3]}.`);