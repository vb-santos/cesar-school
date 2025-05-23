#include <stdio.h>

int maiorElemento(int vet[], int n) {
  if (n == 1) {
      return vet[0];
  }
  
  int maior_do_resto = maiorElemento(vet + 1, n - 1);
  if (vet[0] > maior_do_resto) {
    maior_do_resto = vet[0];
  }

  return maior_do_resto;
}

int main() {
  int tamanho;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho];

  for(int i = 0; i < tamanho; i++) {
    printf("Informe o %d numero do vetor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("\nMaior elemento: %d\n", maiorElemento(vetor, tamanho));

  return 0;
}