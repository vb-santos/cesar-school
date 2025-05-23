#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  int numero_conta;
  float saldo;
} ContaBancaria;

void depositar(float* saldo, float valor_deposito) {
  if (valor_deposito <= 0) {
    printf("Valor inválido para deposito!\n");
    return;
  }

  printf("\nRealizando deposito no valor de: R$%.2f", valor_deposito);
  *saldo += valor_deposito;
  printf("\nOperacao realizada com sucesso!\n");
}

void sacar(float* saldo, float valor_saque) {
  if (*saldo == 0 || valor_saque > *saldo) {
    printf("Saldo insuficiente para realizar o saque!\n");
    return;
  }

  printf("\nRealizando saque no valor de: R$%.2f", valor_saque);
  *saldo -= valor_saque;
  printf("\nOperacao realizada com sucesso!\n");
}

void exibirSaldo(ContaBancaria conta) {
  printf("\nO saldo atual do usuario %s e: R$%.2f\n", conta.nome, conta.saldo);
}

int main() {
  ContaBancaria conta;
  int operacao = -1;
  float valor_saque, valor_deposito;
  conta.saldo = 0;
  conta.numero_conta = 1001;

  printf("Por favor, informe o nome do titular da conta: ");
  fgets(conta.nome, 50, stdin);
  conta.nome[strcspn(conta.nome, "\n")] = '\0';

  const char* menu =  "--------------- C99 BANK ---------------\n"
                      "Bem-vindo ao banco C99! Abaixo encontrara\n"
                      "as possiveis operacoes a serem realizadas\n"
                      "Digite 1: Sacar\n"
                      "Digite 2: Depositar\n"
                      "Digite 3: Exibir o Saldo\n"
                      "Digite 4: Exibir Menu\n"
                      "Digite 0: Finalizar operacoes\n"
                      "----------------------------------------\n";

  printf("%s", menu);

  while (operacao != 0){
    printf("\nInsira um digito de operacao: ");
    scanf("%d", &operacao);

    switch (operacao) {
      case 1:
        printf("\nInforme o valor desejado para o saque: R$");
        scanf("%f", &valor_saque);

        sacar(&conta.saldo, valor_saque);

        break;
      
      case 2:
        printf("\nInforme o valor desejado para o deposito: R$");
        scanf("%f", &valor_deposito);

        depositar(&conta.saldo, valor_deposito);

        break;

      case 3:
        exibirSaldo(conta);
        break;

      case 4:
        printf("%s", menu);
        break;

      default:
        printf("Opcao invalida! (Nenhuma operacao correspondente)\n");
    }
  }

  return 0;
}