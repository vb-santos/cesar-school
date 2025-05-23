#include <stdio.h>

typedef struct {
  int valor;
  struct No *esquerda;
  struct No *direita;
} No;

No *criarNo(int valor) {
  No* novo = (No *)malloc(sizeof(No));
  novo->valor = valor;
  novo->esquerda = NULL;
  novo->direita = NULL;
  return novo;
}

void *preOrdem(No *raiz) {
  if (raiz != NULL) {
    printf("%d\n", raiz->valor);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
  }
}

void *emOrdem(No *raiz) {
  if (raiz != NULL) {
    emOrdem(raiz->esquerda);
    printf("%d\n", raiz->valor);
    emOrdem(raiz->direita);
  }
}

void *posOrdem(No *raiz) {
  if (raiz != NULL) {
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d\n", raiz->valor);
  }
}

  