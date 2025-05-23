#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[50];
  char cargo[30];
  float salario;
} Funcionario;

int main() {
  int nFuncs;
  printf("Insira o numero de funcionarios da empresa: ");
  scanf("%d", &nFuncs);

  Funcionario funcs[nFuncs];

  for(int i=0; i < nFuncs; i++) {
    printf("Informe o nome, cargo e salario do %do funcionario: ", i+1);
    scanf("%49s %29s %f", funcs[i].nome, funcs[i].cargo, &funcs[i].salario);
  }

  printf("\n------------ LISTA DE FUNCIONARIOS ------------");
  for(int i=0; i < nFuncs; i++) {
    printf("\nNome: %s\nCargo: %s\nSalario: %.2f\n", funcs[i].nome, funcs[i].cargo, funcs[i].salario);
  }
  
  return 0;
}