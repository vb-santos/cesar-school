#include <stdio.h>

typedef struct {
  char nome[50];
  int idade;
  float altura;
} Pessoa;

int main() {
  Pessoa p1;
  
  printf("Insira o nome, idade e altura da pessoa em metros: ");
  scanf("%49s %d %f", p1.nome, &p1.idade, &p1.altura);

  printf("Nome: %s,\nIdade: %d,\nAltura: %.2fm", p1.nome, p1.idade, p1.altura);

  return 0;
}
