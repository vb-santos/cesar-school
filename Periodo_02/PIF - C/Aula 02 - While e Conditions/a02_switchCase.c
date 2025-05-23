#include <stdio.h>

int main(void) {
  int x = 3;

  switch(x){
    case 1:
      printf("x vale %d", 1);
      break;
    case 2:
      printf("x vale %d", 2);
      break;
    case 3:
      printf("x vale %d", 3);
      break;
    default:
      printf("Não sei quanto vale x");
  }
}