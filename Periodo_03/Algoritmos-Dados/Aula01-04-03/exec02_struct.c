#include <stdio.h>

typedef struct {
  char nome[40];
  int notaMatematica;
  int notaFisica;
  double media;
} Aluno;

int main() {
  Aluno aluno1, aluno2, aluno3;

  printf("Digite o nome, nota de matemática e nota de física do aluno 1: ");
  scanf("%s %d %d", aluno1.nome, &aluno1.notaMatematica, &aluno1.notaFisica);

  printf("Digite o nome, nota de matemática e nota de física do aluno 2: ");
  scanf("%s %d %d", aluno2.nome, &aluno2.notaMatematica, &aluno2.notaFisica);

  printf("Digite o nome, nota de matemática e nota de física do aluno 3: ");
  scanf("%s %d %d", aluno3.nome, &aluno3.notaMatematica, &aluno3.notaFisica);

  aluno1.media = (aluno1.notaMatematica + aluno1.notaFisica) / 2.0;
  aluno2.media = (aluno2.notaMatematica + aluno2.notaFisica) / 2.0;
  aluno3.media = (aluno3.notaMatematica + aluno3.notaFisica) / 2.0;

  printf("Aluno 1: %s, Nota Matemática: %d, Nota Física: %d, Media: %.2lf\n", aluno1.nome, aluno1.notaMatematica, aluno1.notaFisica, aluno1.media);
  printf("Aluno 2: %s, Nota Matemática: %d, Nota Física: %d, Media: %.2lf\n", aluno2.nome, aluno2.notaMatematica, aluno2.notaFisica, aluno2.media);
  printf("Aluno 3: %s, Nota Matemática: %d, Nota Física: %d, Media: %.2lf\n", aluno3.nome, aluno3.notaMatematica, aluno3.notaFisica, aluno3.media);

  system("pause");
  return 0;
}