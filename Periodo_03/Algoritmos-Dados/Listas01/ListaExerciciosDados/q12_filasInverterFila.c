#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int dado;
  struct No* prox;
} No;

typedef struct {
  No* frente;
  No* tras;
} Fila;

typedef struct {
  No* topo;
} Pilha;

Fila* criarFila() {
  Fila* f = (Fila*)malloc(sizeof(Fila));
  f->frente = f->tras = NULL;
  return f;
}

void enfileirar(Fila* f, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = NULL;

  if (f->tras == NULL) {
    f->frente = f->tras = novo;
  } else {
    f->tras->prox = novo;
    f->tras = novo;
  }
}

int desenfileirar(Fila* f) {
  if (f->frente == NULL) {
    printf("Fila vazia!\n");
    return -1;
  }

  No* temp = f->frente;
  int valor = temp->dado;
  f->frente = f->frente->prox;

  if (f->frente == NULL) {
      f->tras = NULL;
  }

  free(temp);
  return valor;
}

int filaVazia(Fila* f) {
  return f->frente == NULL;
}

Pilha* criarPilha() {
  Pilha* p = (Pilha*)malloc(sizeof(Pilha));
  p->topo = NULL;
  return p;
}

void empilhar(Pilha* p, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = p->topo;
  p->topo = novo;
}

int desempilhar(Pilha* p) {
  if (p->topo == NULL) {
    printf("Pilha vazia!\n");
    return -1;
  }

  No* temp = p->topo;
  int valor = temp->dado;
  p->topo = p->topo->prox;
  free(temp);
  return valor;
}

int pilhaVazia(Pilha* p) {
  return p->topo == NULL;
}

void inverterFila(Fila* f) {
  Pilha* p = criarPilha();
  
  while (!filaVazia(f)) {
    empilhar(p, desenfileirar(f));
  }
  
  while (!pilhaVazia(p)) {
    enfileirar(f, desempilhar(p));
  }
  
  free(p);
}

void imprimirFila(Fila* f) {
  if (filaVazia(f)) {
    printf("Fila vazia!\n");
    return;
  }

  printf("Fila: ");
  No* atual = f->frente;
  while (atual != NULL) {
    printf("%d ", atual->dado);
    atual = atual->prox;
  }
  printf("\n");
}

int main() {
  Fila* fila = criarFila();
  
  enfileirar(fila, 10);
  enfileirar(fila, 20);
  enfileirar(fila, 30);
  enfileirar(fila, 40);
  
  printf("Fila original:\n");
  imprimirFila(fila);
  
  inverterFila(fila);
  
  printf("\nFila invertida:\n");
  imprimirFila(fila);
  
  return 0;
}