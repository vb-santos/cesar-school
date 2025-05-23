#include <stdio.h>

typedef struct {
  char nome[30];
  int codigo;
  float preco;
} Produto;

void formatarDados(Produto produto) {
  printf("Nome do produto: %s\nCodigo do produto: %d\nPreco do produto:%.2f",
    produto.nome,
    produto.codigo,
    produto.preco
  );
}

int main() {
  Produto produto;

  printf("Insira o nome, codigo e preco do produto desejado:\n");
  scanf("%29s %d %f", produto.nome, &produto.codigo, &produto.preco);

  formatarDados(produto);

  return 0;
}