#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

typedef struct {
  int dados[TAMANHO];
  int frente;
  int tras;
  int quantidade;
} FilaCircular;

FilaCircular* criarFilaCircular() {
  FilaCircular* f = (FilaCircular*)malloc(sizeof(FilaCircular));
  f->frente = 0;
  f->tras = -1;
  f->quantidade = 0;
  return f;
}

void enfileirar(FilaCircular* f, int valor) {
  if (f->quantidade == TAMANHO) {
    printf("Fila cheia! Nao eh possível enfileirar %d\n", valor);
    return;
  }
  
  f->tras = (f->tras + 1) % TAMANHO;
  f->dados[f->tras] = valor;
  f->quantidade++;
}

void desenfileirar(FilaCircular* f) {
  if (f->quantidade == 0) {
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Valor removido: %d\n", f->dados[f->frente]);
  f->frente = (f->frente + 1) % TAMANHO;
  f->quantidade--;
}

void mostrarFrente(FilaCircular* f) {
  if (f->quantidade == 0) {
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Primeiro elemento: %d\n", f->dados[f->frente]);
}

void imprimirFila(FilaCircular* f) {
  if (f->quantidade == 0) {
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Fila: [");
  int i;
  for (i = 0; i < f->quantidade; i++) {
    int pos = (f->frente + i) % TAMANHO;
    printf("%d", f->dados[pos]);
    if (i < f->quantidade - 1) printf(", ");
  }
  printf("]\n");
}

int main() {
  FilaCircular* fila = criarFilaCircular();
  
  enfileirar(fila, 10);
  enfileirar(fila, 20);
  enfileirar(fila, 30);
  imprimirFila(fila);
  
  desenfileirar(fila);
  imprimirFila(fila);
  
  enfileirar(fila, 40);
  enfileirar(fila, 50);
  enfileirar(fila, 60);
  imprimirFila(fila);
  
  enfileirar(fila, 70);
  imprimirFila(fila);
  
  free(fila);
  return 0;
}