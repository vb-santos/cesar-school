#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int dado;
  struct No* prox;
} No;

No* empilhar(No* topo, int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = topo;
  return novo;
}

No* desempilhar(No* topo, int* valor) {
  if (!topo) {
    return NULL;
  } 

  No* temp = topo;
  *valor = topo->dado;
  topo = topo->prox;

  free(temp);
  return topo;
}

void decimalParaBinario(int numero) {
  No* pilha = NULL;
  int digito;
  
  if (numero == 0) {
    printf("0");
    return;
  }
  
  while (numero > 0) {
    pilha = empilhar(pilha, numero % 2);
    numero = numero / 2;
  }

  printf("Numero binario: ");
  while (pilha) {
    pilha = desempilhar(pilha, &digito);
    printf("%d", digito);
  }

  printf("\n");
}

int main() {
  int numero;
  
  printf("Digite um numero decimal: ");
  scanf("%d", &numero);
  
  decimalParaBinario(numero);
  
  return 0;
}