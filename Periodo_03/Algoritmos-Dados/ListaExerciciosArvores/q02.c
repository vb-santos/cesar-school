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

No* remover(No* raiz, int valor) {
  if (raiz == NULL) {
    return raiz;
  }

  if (valor < raiz->valor) {
    raiz->esquerda = remover(raiz->esquerda, valor);
  }

  else if (valor > raiz->valor) {
    raiz->direita = remover(raiz->direita, valor);
  }

  else {
    // Sem filhos
    if (raiz->esquerda == NULL && raiz->direita == NULL) {
      free(raiz);
      return NULL;
    }

    // Filho a direita
    else if (raiz->esquerda == NULL) {
      No* temp = raiz->direita;
      free(raiz);
      return temp;
    }

    // Filho a esquerda
    else if (raiz->direita == NULL) {
      No* temp = raiz->esquerda;
      free(raiz);
      return temp;
    }
  
    // Dois filhos, acha o sucessor
    No* temp = encontrarMinimo(raiz->direita);
    raiz->valor = temp->valor;
    raiz->direita = remover(raiz->direita, temp->valor);
  }

  return raiz;
}

void emOrdem(No* raiz) {
  if (raiz != NULL) {
    emOrdem(raiz->esquerda);
    printf("%d -> ", raiz->valor);
    emOrdem(raiz->direita);
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

  printf("Arvore em ordem: \n");
  emOrdem(raiz);
  printf("\n");

  raiz = remover(raiz, 20);
  raiz = remover(raiz, 30);
  raiz = remover(raiz, 50);

  printf("Arvore em ordem pos remocoes: \n");
  emOrdem(raiz);
  printf("\n");

  return 0;
}