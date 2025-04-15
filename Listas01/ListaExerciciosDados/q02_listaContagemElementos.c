#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int dado;
  struct No* prox;
} No;

No* inserirInicio(No* lista, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = lista;
  return novo;
}

No* inserirFim(No* lista, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = NULL;

  if (!lista) {
    return novo;
  }

  No* temp = lista;
  while(temp->prox) {
    temp = temp->prox;
  }

  temp->prox = novo;
  return lista;
}

No* removerElemento(No* lista, int valor) {
  if (!lista) {
    printf("A lista informada esta vazia!");
    return;
  }

  No* anterior = NULL;
  No* atual = lista;

  while(atual != NULL && atual->dado != valor) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual == NULL) {
    printf("Elemento nao encontrado na lista");
    return;
  }

  if (anterior == NULL) {
    lista = atual->prox;
  } else {
    anterior->prox = atual->prox;
  }

  free(atual);
  return lista;
}

void exibirElementos(No* lista) {
  if (!lista) {
    printf("Lista vazia!");
    return;
  }

  No* temp = lista;
  while (temp) {
    printf("%d -> ", temp->dado);
    temp = temp->prox;
  }
  printf("NULL\n");
}

int contarElementos(No* lista) {
  int contador = 0;
  No* temp = lista;

  while(temp) {
    temp = temp->prox;
    contador += 1;
  }

  return contador;
}

int main() {
  No* lista = NULL;

  lista = inserirInicio(lista, 10);
  lista = inserirFim(lista, 20);
  lista = inserirInicio(lista, 5);
  lista = inserirFim(lista, 30);
  
  int quantidade = contarElementos(lista);

  exibirElementos(lista);
  printf("A lista tem %d itens\n", quantidade);
  
  lista = removerElemento(lista, 10);
  exibirElementos(lista);
  
  lista = removerElemento(lista, 5);
  exibirElementos(lista);
  
  lista = removerElemento(lista, 30);
  exibirElementos(lista);
  
  lista = removerElemento(lista, 99);
  
  free(lista);
  return 0;
}