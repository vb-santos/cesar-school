#include <stdio.h>

int exibirTabuada(int numero) {
  for (int i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
}

int main() {
  int numero;
  printf("Digite um número entre 1 e 9: ");
  scanf("%d", &numero);

  while (numero < 1 || numero >= 10){
    printf("Número inválido. Digite um número entre 1 e 9: ");
    scanf("%d", &numero);
  }

  exibirTabuada(numero);

  return 0;
}