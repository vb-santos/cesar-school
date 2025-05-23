#include <stdio.h>

int main(void) {
  int contador = 0;
  while(contador < 10){
    printf("\n%d", contador);
    contador++;
  }

  contador = 0;
  do{
    printf("\n%d", contador);
    contador++;
  } while (contador < 10);
}