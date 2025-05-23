#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
  if (b == 0){
    return a;
  }

  return mdc(b, a % b);
}

int mdcInterativo(int a, int b){
  while(b != 0){
    int temp = a;
    a = b;
    b = temp % b;
  }

  return a;
}

int main() {
  int a, b;
  
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &a, &b);
  printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));

  printf("Digite dois números inteiros: ");
  scanf("%d %d", &a, &b);
  printf("MDC(%d, %d) = %d\n", a, b, mdcInterativo(a, b));

  return 0;
}