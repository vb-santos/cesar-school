#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int dado;
  struct No* prox;
} No;

No* inserir(No* lista, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;

  if (!lista || lista->dado > valor) {
    novo->prox = lista;
    return novo;
  }
 
  No* anterior = NULL;
  No* atual = lista;

  while (atual) {
    if (atual->dado == valor) {
      free(novo);
      printf("Valor já existe na lista!");
      return lista;
    }

    if (atual->dado > valor) {
      novo->prox = atual;
      anterior->prox = novo;
      return lista;
    }

    anterior = atual;
    atual = atual->prox;
  }

  anterior->prox = novo;
  novo->prox = NULL;
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

int main() {
  No* lista = NULL;

  lista = inserir(lista, 10);
  lista = inserir(lista, 20);
  lista = inserir(lista, 5);
  lista = inserir(lista, 30);
  
  exibirElementos(lista);
  
  free(lista);
  return 0;
}