#include <stdio.h>

int produtoPorSomas(int fator, int q) {
  if (q == 1) {
    return fator;
  }

  return fator + produtoPorSomas(fator, q-1);
}

int produtoPorSomasIterativo(int fator, int q) {
  int soma = 0;
  
  for(int i = 0; i < q; i++) {
    soma += fator;
  }

  return soma;
}

int main() {
  int fator, q;
  printf("Informe os fatores da multiplicacao: ");
  scanf("%d %d", &fator, &q);

  printf("O resultado da multiplicacao por recursividade eh: %d\n", produtoPorSomas(fator, q));
  printf("O resultado da multiplicacao por iteracao eh: %d\n", produtoPorSomasIterativo(fator, q));

  return 0;
}