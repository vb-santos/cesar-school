let idadeUsuario = parseInt(prompt("Digite sua idade"));

if(idadeUsuario >= 18 && idadeUsuario <= 70){
    //mensagem na tela
    document.write("O seu voto é obrigatório!");
}

else if(idadeUsuario == 16 || idadeUsuario == 17 || idadeUsuario > 70){
    //mensagem em alerta
    alert("Seu voto é opcional!");
}

else{
    //mensagem no console
    console.log("Você não tem idade para votar.");
}