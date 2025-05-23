#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dado;                               // Armazena um inteiro
    struct No* prox;                        // Ponteiro para o próximo Nó                   
} No;

// Inserir no início da lista
No* inserirInicio(No* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No));     // Aloca memória para um novo Nó
    novo->dado = valor;                     // Atribui o valor ao novo Nó
    novo->prox = lista;                     // O próximo do novo Nó aponta para o início atual da lista
    return novo;                            // O novo Nó se torna o novo início da lista
}

// Inserir no final da lista
No* inserirFim(No* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No));     // Aloca memória para um novo Nó
    novo->dado = valor;                     // Atribui o valor ao novo Nó
    novo->prox = NULL;                      // O próximo do novo Nó é NULL, pois será o último da lista
    if (!lista) return novo;                // Se a lista estiver vazia, retorna o novo Nó como o início da lista
    
    No* temp = lista;                       // Cria um ponteiro temporário para percorrer a lista
    while (temp->prox) temp = temp->prox;   // Percorre até o último Nó
    temp->prox = novo;                      // O próximo do último Nó aponta para o novo Nó   
    return lista;                           // Retorna a lista atualizada
}

// Imprimir a lista
void imprimirLista(No* lista) {
    No* temp = lista;                       // Cria um ponteiro temporário para percorrer a lista
    while (temp) {                          // Enquanto não chegar ao final da lista
        printf("%d -> ", temp->dado);       // Imprime o valor do Nó atual
        temp = temp->prox;                  // Avança para o próximo Nó
    }
    printf("NULL \n");
}

int main() {
    No* lista = NULL;                       // Inicializa a lista como vazia
    // Insere valores na lista
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);          
    imprimirLista(lista);                   // Imprime a lista atualizada
    return 0;
}