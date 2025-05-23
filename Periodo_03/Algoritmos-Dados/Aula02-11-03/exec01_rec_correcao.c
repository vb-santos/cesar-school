#include <stdio.h>
#include <string.h>

void inverterString(char str[], int inicio, int fim){
  if (inicio >= fim){
    return;
  }

  char temp = str[inicio];
  str[inicio] = str[fim];
  str[fim] = temp;

  inverterString(str, inicio + 1, fim - 1);
}

void inverterStringIterativo(char str[]){
  int inicio = 0;
  int fim = strlen(str) - 1;

  while(inicio < fim){
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    inicio++;
    fim--;
  }
}

int main() {
  char nome[50];
  char nomeIterativo[50];
  printf("Digite um nome: ");
  scanf("%s", nome);

  strcpy(nomeIterativo, nome);

  inverterString(nome, 0, strlen(nome) - 1);
  printf("Nome invertido: %s\n", nome);

  inverterStringIterativo(nomeIterativo);
  printf("Nome invertido iterativo: %s\n", nomeIterativo);

  return 0;
}