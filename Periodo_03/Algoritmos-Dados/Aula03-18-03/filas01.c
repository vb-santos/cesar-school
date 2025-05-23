#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char nome[50];                              // Armazena o nome
    struct No* prox;                            // Ponteiro para o próximo Nó
} No;

typedef struct {    
    No* frente;                                 // Ponteiro para o início da fila
    No* tras;                                   // Ponteiro para o final da fila
} Fila;

Fila* criarFila() {
    Fila* f = (Fila*)malloc(sizeof(Fila));      // Aloca memória para a fila
    f->frente = f->tras = NULL;                 // Inicializa os ponteiros da fila como NULL
    return f;                                   // Retorna a fila criada
}

void enfileirar(Fila* f, char nome[]) {
    No* novo = (No*)malloc(sizeof(No));         // Aloca memória para um novo Nó
    strcpy(novo->nome, nome);                   // Copia o nome para o novo Nó
    novo->prox = NULL;                          // O próximo do novo Nó é NULL, pois será o último da fila

    if (!f->tras) {                             // Se a fila estiver vazia, o novo Nó é o primeiro
        f->frente = f->tras = novo;             // O início e o final da fila apontam para o novo Nó
        return;                                 // Retorna se a fila estava vazia
    }

    f->tras->prox = novo;                       // O próximo do último Nó aponta para o novo Nó
    f->tras = novo;                             // O novo Nó se torna o novo ultimo da fila
}

void desenfileirar(Fila* f) {
    if (!f->frente)                             // Se a fila estiver vazia, não há nada para desenfileirar
        return;                                 // Retorna se a fila estiver vazia

    No* temp = f->frente;                       // Armazena o Nó a ser desenfileirado
    f->frente = f->frente->prox;                // O início da fila agora aponta para o próximo Nó
    if (!f->frente) f->tras = NULL;             // Se a fila ficou vazia, o final também deve ser NULL
    free(temp);                                 // Libera a memória do Nó desenfileirado
}

void imprimirFila(Fila* f) {    
    No* temp = f->frente;                       // Cria um ponteiro temporário para percorrer a fila
    while (temp) {                              // Enquanto não chegar ao final da fila
        printf("%s <- ", temp->nome);           // Imprime o nome do Nó atual
        temp = temp->prox;                      // Avança para o próximo Nó
    }
    printf("NULL \n");
}

int main() {
    Fila* fila = criarFila();
    enfileirar(fila, "Ana");
    enfileirar(fila, "Bruno");
    enfileirar(fila, "Carlos");
    imprimirFila(fila);

    desenfileirar(fila);
    imprimirFila(fila);

    return 0;
}