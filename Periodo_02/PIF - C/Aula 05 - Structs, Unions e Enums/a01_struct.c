#include <stdio.h>

struct Tutor {char nome[100];} typedef Tutor;

struct Cachorro {  // Pode ser fora de funções ou dentro
    int tamanho;
    char raca[40];
    char cor[40];
    Tutor pessoa;
} typedef Cachorro; // O TypeDef define o "Cachorro" como um tipo de var

int main(){
    Cachorro doguinho;
    scanf("%d %s %s", &doguinho.tamanho, doguinho.raca, doguinho.cor);
    printf("%d", doguinho.tamanho);

    Cachorro canil[10]; // Lista de structs

    return 0;
}
