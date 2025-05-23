#include <stdio.h>

int contarDigitos(int n) {
  if (n == 0) {
    return 1;
  } else if (n < 0) {
    n = -n;
  }

  if (n < 10) {
    return 1;
  } else {
    return 1 + contarDigitos(n / 10);
  }
}

int main() {
  int n;
  printf("Informe o numero que deseja contar a quantidade de caracteres: ");
  scanf("%d", &n);

  int total = contarDigitos(n);
  printf("\nTotal de caracteres: %d", total);

  return 0;
}