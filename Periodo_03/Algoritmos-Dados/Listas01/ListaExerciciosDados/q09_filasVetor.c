#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dados[100];
  int frente;
  int tras; 
} Fila;

Fila* criarFila() {
  Fila* f = (Fila*)malloc(sizeof(Fila));
  f->frente = 0;
  f->tras = -1; 
  return f;
}

void enfileirar(Fila* f, int valor) {
  if (f->tras == 99) { 
    printf("Fila cheia!\n");
    return;
  }
  
  f->dados[++f->tras] = valor;     
}

void desenfileirar(Fila* f) {
  if (f->frente > f->tras) {        
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Valor removido: %d\n", f->dados[f->frente++]);
}

void mostrarFrente(Fila* f) {
  if (f->frente > f->tras) {       
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Primeiro elemento: %d\n", f->dados[f->frente]); 
}

void imprimirFila(Fila* f) {
  if (f->frente > f->tras) {  
    printf("Fila vazia!\n");
    return;
  }
  
  printf("Fila: ");
  for (int i = f->frente; i <= f->tras; i++) {
    printf("%d ", f->dados[i]);  
  }
  
  printf("\n");
}

int main() {
  Fila* fila = criarFila();
  
  enfileirar(fila, 10);
  enfileirar(fila, 20);
  enfileirar(fila, 30);
  imprimirFila(fila);
  
  mostrarFrente(fila);
  
  desenfileirar(fila);
  imprimirFila(fila);
  
  desenfileirar(fila);
  desenfileirar(fila);
  imprimirFila(fila);
  
  free(fila);
  return 0;
}