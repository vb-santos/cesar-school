#include <stdio.h>

int produtoPorSomas(int fator, int q) {
  if (q == 1) {
    return fator;
  }

  return fator + produtoPorSomas(fator, q-1);
}

int main() {
  int fator, q;
  printf("Informe os fatores da multiplicacao: ");
  scanf("%d %d", &fator, &q);

  printf("O resultado da multiplicacao eh: %d\n", produtoPorSomas(fator, q));

  return 0;
}