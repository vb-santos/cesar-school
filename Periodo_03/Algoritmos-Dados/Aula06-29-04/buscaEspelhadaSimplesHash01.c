#include <stdio.h>
#define TAM 10

int tabelaHash[TAM];

  // Função hash simples
int hash(int chave) {
  return chave % TAM;
}

// Inserir elemento
void inserir(int chave) {
  int indice = hash(chave);
  tabelaHash[indice] = chave;
}

// Buscar elemento
int buscar(int chave) {
  int indice = hash(chave);
  if (tabelaHash[indice] == chave) {
    return indice; // encontrado
  } else {
    return -1; // não encontrado
  }
}

int main() {
  // Inicializar tabela com -1
  for (int i = 0; i < TAM; i++) {
    tabelaHash[i] = -1;
  }

  inserir(15);
  inserir(25);
  inserir(35);

  int valor = 25;
  int pos = buscar(valor);

  if (pos != -1) {
    printf("Valor: %d enconrado na posicao hash: %d\n", valor, pos);
  } else {
    printf("Valor nao encontrado na tabela hash.\n");
  }

  return 0;
}