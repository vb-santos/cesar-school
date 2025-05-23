#include <stdio.h>

int main(void) {
  double notaAlunoA;
  double notaAlunoB;
  double pesoA = 3.5;
  double pesoB = 7.5;

  printf("Digite a nota do aluno A: ");
  scanf("%lf", &notaAlunoA);

  printf("Digite a nota do aluno B: ");
  scanf("%lf", &notaAlunoB);
  
  double media = ((notaAlunoA * pesoA) + (notaAlunoB * pesoB)) / (pesoA + pesoB);

  printf("MEDIA = %.5lf", media);
  
}