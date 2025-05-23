#include <stdio.h>

int contagemRegressiva(int n) {
  if(n == 0) {
    printf("0.");
    return;
  } else {
    printf("%d, ", n);
    contagemRegressiva(n-1);
  }
}

int main() {
  int n;
  printf("Informe o tempo da contagem regressiva: ");
  scanf("%d", &n);

  contagemRegressiva(n);

  return 0;
}