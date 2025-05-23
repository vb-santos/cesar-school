#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[50];
  int idade;
  char diagnostico[100];
} Paciente;

Paciente* filtroIdade(Paciente* pacientes, int tamanho, int* numero_filtrados) {
  int count = 0;

  for (int i = 0; i < tamanho; i++) {
    if (pacientes[i].idade >= 60) {
      count++;
    }
  }

  Paciente* pacientes_filtrados = (Paciente*)malloc(count * sizeof(Paciente));

  int j = 0;
  for (int i = 0; i < tamanho; i++) {
    if (pacientes[i].idade >= 60) {
      pacientes_filtrados[j] = pacientes[i];
      j++;
    }
  }

  *numero_filtrados = count;
  return pacientes_filtrados;
}

int main() {
  int n;
  printf("Informe a quantidade de pacientes registrados: ");
  scanf("%d", &n);

  Paciente pacientes[n];
  
  for (int i = 0; i < n; i++) {
    printf("Informe nome, idade e diagnostico do paciente %d\n", i+1);
    scanf("%49s %d %99s", pacientes[i].nome, &pacientes[i].idade, pacientes[i].diagnostico);
  }

  int n_filtrados = 0;
  Paciente* pacientes_filtrados = filtroIdade(pacientes, n, &n_filtrados);

  printf("\n---------- Lista de pacientes maiores de 60 anos ----------");
  for (int i = 0; i < n_filtrados; i++) {
    printf("\nNome: %s\nIdade: %d\nDiagnostico: %s\n",
      pacientes_filtrados[i].nome,
      pacientes_filtrados[i].idade,
      pacientes_filtrados[i].diagnostico
    );
  }

  free(pacientes_filtrados);
  return 0;
}