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

No* encontrarMinimo(No* raiz) {
  while (raiz->esquerda != NULL) {
    raiz = raiz->esquerda;
  }

  return raiz;
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

  else if (raiz->valor == valor) {
    printf("ERRO, Valor já existe na árvore");
    return;
  }

  return raiz;
}

void encontrarValor(No* raiz, int valor) {
  if (raiz == NULL) {
    printf("O valor %d nao foi encontrado na arvore\n", valor);
    return;
  }

  if (raiz->valor > valor) {
    encontrarValor(raiz->esquerda, valor);
  } 

  else if (raiz->valor < valor) {
    encontrarValor(raiz->direita, valor);
  }

  else if (raiz->valor == valor) {
    printf("O valor %d foi encontrado!\n", valor);
  }
}

int main() {
  No* raiz = NULL;

  raiz = inserir(raiz, 50);
  raiz = inserir(raiz, 30);
  raiz = inserir(raiz, 70);
  raiz = inserir(raiz, 20);
  raiz = inserir(raiz, 40);
  raiz = inserir(raiz, 60);
  raiz = inserir(raiz, 80);

  encontrarValor(raiz, 60);
  encontrarValor(raiz, 25);
  encontrarValor(raiz, 40);

  return 0;
}