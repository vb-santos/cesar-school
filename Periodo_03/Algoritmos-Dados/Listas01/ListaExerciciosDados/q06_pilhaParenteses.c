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

void verificarParenteses(char* expressao) {
  No* pilha = NULL;
  char c;
  
  for (int i = 0; expressao[i] != '\0'; i++) {
    if (expressao[i] == '(') {
      pilha = empilhar(pilha, '(');
    } else if (expressao[i] == ')') {
      if (!pilha) {
        printf("A pilha nao esta balanceada");
        return;
      }
      pilha = desempilhar(pilha, &c);
    }
  }
  
  printf("A pilha esta balanceada");
}

int main() {
  char expressao[100];
  
  printf("Digite uma expressao com parenteses: ");
  scanf("%s", expressao);
  
  verificarParenteses(expressao);
  
  return 0;
}