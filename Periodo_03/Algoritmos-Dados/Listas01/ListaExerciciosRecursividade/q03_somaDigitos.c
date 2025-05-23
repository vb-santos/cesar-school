#include <stdio.h>

int somaDigitos(int n) {
  if(n < 0) {
    n = -n;
  }

  if(n < 10) {
    return n;
  }
  
  int ultimo_digito = n % 10;
  int resto_do_numero = n / 10;
  
  if(ultimo_digito < 0) {
      ultimo_digito = -ultimo_digito;
  }
  
  return ultimo_digito + somaDigitos(resto_do_numero);
}

int main() {
  int n;
  printf("Informe um numero para somar seus digitos: ");
  scanf("%d", &n);

  printf("Soma dos digitos de %d: %d", n, somaDigitos(n));
  
  return 0;
}