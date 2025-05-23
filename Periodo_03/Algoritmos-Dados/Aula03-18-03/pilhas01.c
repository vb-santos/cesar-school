#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    char dado;                                  // Armazena um caractere
    struct No* prox;                            // Ponteiro para o próximo Nó
} No;

No* empilhar(No* topo, char valor) {
    No* novo = (No*)malloc(sizeof(No));         // Aloca memória para um novo Nó
    novo->dado = valor;                         // Atribui o valor ao novo Nó
    novo->prox = topo;                          // O próximo do novo Nó aponta para o topo atual
    return novo;                                // O novo Nó se torna o novo topo
}

No* desempilhar(No* topo, char* valor) {
    if (!topo) return NULL;                     // Se a pilha estiver vazia, retorna NULL
    No* temp = topo;                            // Armazena o topo atual
    
    *valor = topo->dado;                        // Armazena o valor do topo na variável passada por referência  
    
    topo = topo->prox;                          // O topo agora aponta para o próximo Nó
    free(temp);                                 // Libera a memória do Nó desempilhado
    return topo;                                // Retorna o novo topo da pilha
}

void inverterPalavra(No* pilha, char palavra[]) {

    // Empilha cada caractere da palavra
    for (int i = 0; palavra[i] != '\0'; i++)
        pilha = empilhar(pilha, palavra[i]);

    printf("Palavra invertida: ");
    char c;
    // Desempilha e imprime os caracteres
    while (pilha) {
        pilha = desempilhar(pilha, &c);
        printf("%c", c);
    }
    printf("\n");
}

int main() {
    No* pilha = NULL;                           // Inicializa a pilha como vazia
    char palavra[100];                          // Declara um array para armazenar a palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);                       // Lê a palavra do usuário
    inverterPalavra(pilha, palavra);            // Inverte a palavra usando a pilha
    // Libera a memória da pilha (não necessário aqui, mas bom para evitar vazamentos)
    return 0;
}