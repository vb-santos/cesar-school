#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char modelo[30];
  int ano;
  float preco;
} Carro;

int main() {
  Carro* c1 = (Carro*)malloc(sizeof(Carro));

  strcpy(c1->modelo, "Onix");
  c1->ano = 2020;
  c1->preco = 54000.99;

  printf("Modelo:\t%s\nAno:\t%d\nPreco:\t%.2f", c1->modelo, c1->ano, c1->preco);

  free(c1);
  return 0;
}