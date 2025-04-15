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
  if (!lista) return novo;
  
  No* temp = lista;
  while (temp->prox) {
    temp = temp->prox;
  } 

  temp->prox = novo;
  return lista;
}

No* reverterLista(No* lista) {
  No* anterior = NULL;
  No* atual = lista;
  No* proximo = NULL;

  while (atual != NULL) {
    proximo = atual->prox;
    atual->prox = anterior;
    
    anterior = atual;
    atual = proximo;
  } 

  return anterior;
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

int main() {
  No* lista = NULL;
  
  lista = inserirFim(lista, 1);
  lista = inserirFim(lista, 2);
  lista = inserirFim(lista, 3);
  lista = inserirFim(lista, 4);
  
  printf("Lista original: ");
  exibirElementos(lista);
  
  lista = reverterLista(lista);
  
  printf("Lista revertida: ");
  exibirElementos(lista);
  
  return 0;
}