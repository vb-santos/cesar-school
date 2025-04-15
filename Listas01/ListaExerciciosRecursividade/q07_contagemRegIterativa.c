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

void contagemRegressivaIterativa(int n) {
  for(int i = n; i >= 0; i--) {
    if(i == 0) {
      printf("%d.", i);
      break;
    }

    printf("%d, ", i);
  }
}

int main() {
  int n;
  printf("Informe o tempo da contagem regressiva: ");
  scanf("%d", &n);

  printf("Contagem Regressiva recursiva: \n");
  contagemRegressiva(n);

  printf("\nContagem Regressiva iterativa: \n");
  contagemRegressivaIterativa(n);

  return 0;
}