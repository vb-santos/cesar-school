#include <stdio.h>

int main(void) {
  int opcao;
  REFAZ: printf("\n\nEscolha uma opção entre 1 e 5: ");
  scanf("%d", &opcao);

  if((opcao > 5) || (opcao < 1)){
    goto REFAZ;
  }

  else if (opcao == 3){
    printf("\nVocê escolheu a opção 3");
  }

  else{
    printf("\nVocê escolheu a opção %d", opcao);
  }
}