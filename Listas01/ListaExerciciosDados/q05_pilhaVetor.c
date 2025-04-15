#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int dado;
  struct No* prox;
} No;

No* push(No* topo, int valor) {
  No* novoNo = (No*)malloc(sizeof(No));
  novoNo->dado = valor;
  novoNo->prox = topo;
  return novoNo;
}

No* pop(No* topo) {
  if (topo == NULL) {
    return NULL;
  }

  No* temp = topo;
  topo = topo->prox;
  free(temp);
  return topo;
}

void top(No* topo) {
  if (topo == NULL) {
    printf("NULL\n"); 
    return;
  } 

  printf("Topo da pilha -> %d\n", topo->dado);
  return;
}

void isEmpty(No* topo) {
  if (topo == NULL) {
    printf("Pilha vazia!\n"); 
    return;
  }
  
  else {
    printf("A pilha contem elementos\n");
    return;
  }
}

int main() {
  No* pilha = NULL;

  pilha = push(pilha, 5);
  pilha = push(pilha, 4);
  pilha = push(pilha, 3);

  isEmpty(pilha);
  top(pilha);

  pilha = pop(pilha);
  pilha = pop(pilha);
  pilha = pop(pilha);

  isEmpty(pilha);

  return 0;
}