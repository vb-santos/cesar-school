#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No* esquerda;
  struct No* direita;
} No;

No* criarNo(int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->valor = valor;
  novo->esquerda = novo->direita = NULL;
  return novo;
}

No* inserir(No* raiz, int valor) {
  if (raiz == NULL) {
    return criarNo(valor);
  }

  if (raiz->valor > valor) {
    raiz->esquerda = inserir(raiz->esquerda, valor);
  } 

  else if (raiz->valor < valor) {
    raiz->direita = inserir(raiz->direita, valor);
  }

  else if (valor == raiz->valor) {
    printf("Valor já existente!");
    return;
  }

  return raiz;
}

void preOrdem(No* raiz) {
  if (raiz != NULL) {
    printf("%d -> ", raiz->valor);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
  }
}

void emOrdem(No* raiz) {
  if (raiz != NULL) {
    emOrdem(raiz->esquerda);
    printf("%d -> ", raiz->valor);
    emOrdem(raiz->direita);
  }
}

void posOrdem(No* raiz) {
  if (raiz != NULL) {
    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    printf("%d -> ", raiz->valor);
  }
}

int main() {
  No* raiz = NULL;

  raiz = inserir(raiz, 40);
  raiz = inserir(raiz, 20);
  raiz = inserir(raiz, 10);
  raiz = inserir(raiz, 30);
  raiz = inserir(raiz, 60);
  raiz = inserir(raiz, 50);
  raiz = inserir(raiz, 70);

  printf("Arvore pre ordem: \n");
  preOrdem(raiz);
  printf("\n");

  printf("Arvore em ordem: \n");
  emOrdem(raiz);
  printf("\n");

  printf("Arvore pos ordem: \n");
  posOrdem(raiz);
  printf("\n");

  return 0;
}