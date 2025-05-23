#include <stdio.h>
#include <string.h>

char* inverter(char str[]){
  int count
  int countFinal = strlen(str) - 1;

}

int main() {
  char nome[50];
  printf("Digite um nome: ");
  scanf("%s", nome);

  char nomeInvertido[strlen(nome)]; 

  int b = 0;

  for(int i = 0; i < strlen(nome); i++){
    nomeInvertido[b] = nome[strlen(nome) - i - 1];
    b++;
  }

  printf("Nome invertido: %s\n", nomeInvertido);
  printf("Nome invertido funcao: %s\n", inverter(nome));

  return 0;
}