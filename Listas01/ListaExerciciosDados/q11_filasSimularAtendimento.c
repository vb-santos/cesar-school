#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Cliente {
  char nome[50];
  int senha;
  struct Cliente* prox;
} Cliente;

typedef struct {
  Cliente* frente;
  Cliente* tras;
  int contadorSenha;
} FilaBanco;

FilaBanco* criarFilaBanco() {
  FilaBanco* f = (FilaBanco*)malloc(sizeof(FilaBanco));
  f->frente = f->tras = NULL;
  f->contadorSenha = 1;
  return f;
}

void novoCliente(FilaBanco* f, char nome[]) {
  Cliente* novo = (Cliente*)malloc(sizeof(Cliente));
  strcpy(novo->nome, nome);
  novo->senha = f->contadorSenha++;
  novo->prox = NULL;

  if (f->tras == NULL) {
    f->frente = f->tras = novo;
  } else {
    f->tras->prox = novo;
    f->tras = novo;
  }
  
  printf("Cliente %s chegou. Senha: %d\n", nome, novo->senha);
}

void atenderCliente(FilaBanco* f) {
  if (f->frente == NULL) {
    printf("Nenhum cliente para atender.\n");
    return;
  }

  Cliente* atendido = f->frente;
  printf("Atendendo: %s (Senha: %d)\n", atendido->nome, atendido->senha);
  
  f->frente = f->frente->prox;
  if (f->frente == NULL) {
    f->tras = NULL;
  }
  
  free(atendido);
}

void visualizarFila(FilaBanco* f) {
  if (f->frente == NULL) {
    printf("Fila vazia.\n");
    return;
  }

  printf("\n--- FILA DE ATENDIMENTO ---\n");
  Cliente* atual = f->frente;
  while (atual != NULL) {
    printf("Senha %d: %s\n", atual->senha, atual->nome);
    atual = atual->prox;
  }
  printf("--------------------------\n");
}

void simularAtendimento() {
  FilaBanco* fila = criarFilaBanco();
  int opcao;
  char nome[50];
  
  printf("\n=== SIMULADOR DE ATENDIMENTO BANCARIO ===\n");
  
  while (1) {
    printf("\n1. Chegada de cliente\n");
    printf("2. Atender proximo cliente\n");
    printf("3. Visualizar fila\n");
    printf("4. Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
      case 1:
        printf("Nome do cliente: ");
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = '\0';

        novoCliente(fila, nome);
        break;

      case 2:
        atenderCliente(fila);
        break;

      case 3:
        visualizarFila(fila);
        break;

      case 4:
        while (fila->frente != NULL) {
            atenderCliente(fila);
        }
        free(fila);
        return;

      default:
        printf("Opção invalida!\n");
    }
  }
}

int main() {
  simularAtendimento();
  return 0;
}