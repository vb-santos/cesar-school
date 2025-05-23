#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {
  int inicio = 0, fim = tamanho - 1, meio;

  while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (vetor[meio] == valor) {
      return meio;
    } else if (vetor[meio] < valor) {
      inicio = meio + 1; // Busca na metade superior
    } else {
      fim = meio - 1; // Busca na metade inferior
    }
  }

  return -1; // Não encontrado
}

int main() {
  int vetor[] = {3, 6, 9, 12, 15, 18, 21};
  int valor = 15;
  int pos = buscaBinario(vetor, 7, valor);

  if (pos != -1) {
    printf("Valor: %d encontrado na posicao: %d\n", valor, pos);
  } else {
    printf("Valor nao encontrado");
  }

  return 0;
}