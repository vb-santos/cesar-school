#include <stdio.h>

typedef struct {
  int dia;
  char mes[40];
  int ano;
} Data;

typedef struct {
  char nome[40];
  int idade;
  double salario;
  Data dataNascimento;
} Funcionario;

int main() {
  Funcionario funcionarios[3];

  for (int i = 0; i < 3; i++) {
    printf("Digite o nome do funcionário %d: ", i + 1);
    scanf("%s", funcionarios[i].nome);

    printf("Digite a idade do funcionário %d: ", i + 1);
    scanf("%d", &funcionarios[i].idade);

    printf("Digite o salário do funcionário %d: ", i + 1);
    scanf("%lf", &funcionarios[i].salario);

    printf("Digite a data de nascimento do funcionário %d: ", i + 1);
    scanf("%d/%s/%d", &funcionarios[i].dataNascimento.dia, funcionarios[i].dataNascimento.mes, &funcionarios[i].dataNascimento.ano);
  }

  system("pause");
  return 0;
}