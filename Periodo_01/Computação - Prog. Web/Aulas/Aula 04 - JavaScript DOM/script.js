// Elementos pelo ID
let divConteudo = document.getElementById("content") // Achou a div
let primeiroNome = "Victor"
let sobrenome = "Barbosa"

// Alterando o conteúdo da div
divConteudo.innerHTML = `
    <h1>Olá ${primeiroNome} ${sobrenome}</h1>
    <p>Seja bem-vindo!</p>
`

// Elementos pelo nome da tag
let itensLista = document.getElementsByTagName("li");

for (let i = 0; i < itensLista.length; i++) {
    itensLista[i].innerHTML = "Novo item " + (i + 1);
}

// Elementos pelo nome da classe
let boxes = document.getElementsByClassName("box");

for (let i = 0; i < boxes.length; i++) {
    boxes[i].innerHTML = "Nova Box " + (i + 1);
}

// Criar novos elementos e adicionar elementos ao elemento pai
let paragrafo1 = document.createElement("p") // Cria um novo elemento 'p' no documento

paragrafo1.innerHTML = "Este é um parágrafo" // Adiciona um texto ao parágrafo criado
document.body.appendChild(paragrafo1) // Adiciona um novo filho ao elemento pai 'body'

let conteudo = document.getElementById("conteudo") // encontra a div com id = "conteudo"
let paragrafo2 = document.createElement("p") // Cria um novo parágrafo
let texto2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit"

paragrafo2.innerHTML = texto2
conteudo.appendChild(paragrafo2) // anexa o parágrafo ao elemento pai "<div id='conteudo'>"

// Remover um elemento filho

let cabecalho = document.getElementsByTagName("h1")[1] // encontra o segundo h1 do documento
document.body.removeChild(cabecalho) // remove o h1 cujo elemento pai é o body

// Estilizando com DOM  

let textoH1 = document.getElementById("meu-p")
textoH1.style.color = "red"
textoH1.style.fontSize = "60px"
textoH1.style.fontStyle = "italic"
textoH1.style.fontFamily = "Arial"
textoH1.style.textAlign = "center"