#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
  char dado;
  struct No* prox;
} No;

No* empilhar(No* topo, char valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->dado = valor;
  novo->prox = topo;
  return novo;
}

No* desempilhar(No* topo, char* valor) {
  if (!topo) {
    return NULL;
  } 

  No* temp = topo;
  *valor = topo->dado;
  topo = topo->prox;

  free(temp);
  return topo;
}

void inverterString(No* pilha, const char* texto) {
  char c;

  for (int i = 0; texto[i] != '\0'; i++) {
    pilha = empilhar(pilha, texto[i]);
  }
  
  printf("String invertida: ");
  while (pilha) {
    pilha = desempilhar(pilha, &c);
    printf("%c", c);
  }

  printf("\n");
}

int main() {
  No* pilha = NULL;
  char texto[100];
  
  printf("Digite uma string: ");
  scanf("%99s", texto);
  
  inverterString(pilha, texto);
  
  return 0;
}