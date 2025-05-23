#include <stdio.h>

typedef struct {
  int valor;
  struct No *esquerda;
  struct No *direita;
} No;

// Função para criar um novo nó
No* novoNo(int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->valor = valor;
  novo->esquerda = novo->direita = NULL;
  return novo;
}

// Função para inserir um valor na árvore de busca
No* inserir(No* raiz, int valor) {
  // Se a árvore estiver vazia, cria um novo nó e retorna
  if (raiz == NULL) {
    return novoNo(valor);
  }

  // Se o valor a ser inserido for menor que o valor do nó atual,
  // insere na subárvore esquerda
  if (valor < raiz->valor) {
    raiz->esquerda = inserir(raiz->esquerda, valor);
  }
  // Se o valor a ser inserido for maior que o valor do nó atual,
  // insere na subárvore direita
  else if (valor > raiz->valor) {
    raiz->direita = inserir(raiz->direita, valor);
  }
  // Se o valor já existir na árvore, não faz nada
  // (ou pode imprimir uma mensagem de erro, se desejado)
  else if (valor == raiz->valor) {
    printf("Valor já existente!");
    return;
  }

  return raiz;
}

// Função para buscar o menor valor na árvore de busca
No* encontrarMinimo(No* raiz) {
  while (raiz->esquerda =! NULL) {
    raiz = raiz->esquerda;
  }
  return raiz;
}

// Função para remover um valor da árvore de busca
No* remover(No* raiz, int valor) {
  if (raiz == NULL) {
    return raiz;
  }

  // Se o valor a ser removido for menor que o valor do nó atual,
  // chama a função recursivamente na subárvore esquerda
  if (valor < raiz->valor) {
    raiz->esquerda = remover(raiz->esquerda, valor);
  }
  // Se o valor a ser removido for maior que o valor do nó atual,
  // chama a função recursivamente na subárvore direita
  else if (valor > raiz->valor) {
    raiz->direita = remover(raiz->direita, valor);
  }
  
  else {
    // Nó sem filhos
    if (raiz->esquerda == NULL && raiz->direita == NULL) {
      free(raiz);
      return NULL;
    }
    // Nó com um filho
    // A subárvore esquerda é NULL
    else if (raiz->esquerda == NULL) {
      No* temp = raiz->direita;
      free(raiz);
      return temp;
    // A subárvore direita é NULL
    } else if (raiz->direita == NULL) {
      No* temp = raiz->esquerda;
      free(raiz);
      return temp;
    }

    // Nó com dois filhos
    // Encontra o sucessor
    No* temp = encontrarMinimo(raiz->direita);
    // Substitui o valor do nó atual pelo valor do sucessor
    raiz->valor = temp->valor;
    // Remove o sucessor da subárvore direita
    raiz->direita = remover(raiz->direita, temp->valor);
  }

  // Retorna o nó atualizado
  // (pode ser o nó atual ou o nó filho que foi retornado)
  return raiz;
}