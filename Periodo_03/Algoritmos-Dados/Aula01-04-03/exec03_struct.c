#include <stdio.h>

typedef struct {
  char nome[40];
  double preco;
  int quantidade;
  double valorTotal;
} Produto;

int main() {
  Produto produtos[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite o nome do produto %d: ", i + 1);
    scanf("%s", produtos[i].nome);

    printf("Digite o preco do produto %d: ", i + 1);
    scanf("%lf", &produtos[i].preco);

    printf("Digite a quantidade do produto %d: ", i + 1);
    scanf("%d", &produtos[i].quantidade);

    produtos[i].valorTotal = produtos[i].preco * produtos[i].quantidade;
  }

  for (int i = 0; i < 10; i++) {
    printf("Produto %d: %s, Preco: %.2lf, Quantidade: %d, Valor Total: %.2lf\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].valorTotal);
  }
  
  system("pause");
  return 0;
}