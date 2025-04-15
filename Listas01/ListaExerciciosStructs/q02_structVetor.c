#include <stdio.h>

typedef struct {
  char nome[50];
  int matricula;
  float nota;
} Aluno;

int main() {
  Aluno alunos[5];
  float media;
  float soma=0;

  for(int i=0; i < 5; i++){
    printf("Insira o nome, o numero de matricula e a nota do aluno %d\n", i+1);
    scanf("%49s %d %f", alunos[i].nome, &alunos[i].matricula, &alunos[i].nota);

    soma += alunos[i].nota;
    printf("\n");
  }

  media = soma/5;
  printf("A media das notas dos alunos e: %.2f", media);

  return 0;
}