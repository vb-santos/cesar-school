#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {
  int inicio = 0, fim = tamanho - 1, meio;
  while (inicio <= fim) {
    meio = (inicio + fim) / 2;
    if (vetor[meio] == valor) {
      while (vetor[meio-1] == valor) {
        meio = meio - 1;
      }
      return meio;
    }
    else if (vetor[meio] < valor) {
      inicio = meio + 1; 
    }
    else {
      fim = meio - 1;
    }
  }
  return -1; 
}

int main() {
  int vetor[] = {2, 4, 4, 4, 7, 9, 12, 12, 12};
  int valor = 12;
  int pos = buscaBinaria(vetor, 7, valor);
  if (pos != -1) {
    printf("Valor: %d encontrado na posicao: %d.\n", valor, pos);
  }
  else {
    printf("Valor nao encontrado.\n");
  }
  return 0;
}