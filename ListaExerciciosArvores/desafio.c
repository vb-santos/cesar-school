#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No* esquerda;
  struct No* direita;
} No;

No* criarNo(int valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->valor = valor;
  novo->esquerda = novo->direita = NULL;
  return novo;
}

No* encontrarMinimo(No* raiz) {
  while (raiz->esquerda != NULL) {
    raiz = raiz->esquerda;
  }

  return raiz;
}

No* inserir(No* raiz, int valor) {
  if (raiz == NULL) {
    return criarNo(valor);
  }

  if (raiz->valor > valor) {
    raiz->esquerda = inserir(raiz->esquerda, valor);
  }

  else if (raiz->valor < valor) {
    raiz->direita = inserir(raiz->direita, valor);
  }

  else if (raiz->valor == valor) {
    printf("ERRO, Valor ja existe na arvore\n");
    return raiz;
  }

  return raiz;
}

No* remover(No* raiz, int valor) {
  if (raiz == NULL) {
    return raiz;
  }

  if (valor < raiz->valor) {
    raiz->esquerda = remover(raiz->esquerda, valor);
  }

  else if (valor > raiz->valor) {
    raiz->direita = remover(raiz->direita, valor);
  }

  else {
    // Sem filhos
    if (raiz->esquerda == NULL && raiz->direita == NULL) {
      free(raiz);
      return NULL;
    }

    // Filho a direita
    else if (raiz->esquerda == NULL) {
      No* temp = raiz->direita;
      free(raiz);
      return temp;
    }

    // Filho a esquerda
    else if (raiz->direita == NULL) {
      No* temp = raiz->esquerda;
      free(raiz);
      return temp;
    }
  
    // Dois filhos, acha o sucessor
    No* temp = encontrarMinimo(raiz->direita);
    raiz->valor = temp->valor;
    raiz->direita = remover(raiz->direita, temp->valor);
  }

  return raiz;
}

void encontrarValor(No* raiz, int valor) {
  if (raiz == NULL) {
    printf("O valor %d nao foi encontrado na arvore\n", valor);
    return;
  }

  if (raiz->valor > valor) {
    encontrarValor(raiz->esquerda, valor);
  } 

  else if (raiz->valor < valor) {
    encontrarValor(raiz->direita, valor);
  }

  else if (raiz->valor == valor) {
    printf("O valor %d foi encontrado!\n", valor);
  }
}

void emOrdem(No* raiz) {
  if (raiz != NULL) {
    emOrdem(raiz->esquerda);
    printf("%d -> ", raiz->valor);
    emOrdem(raiz->direita);
  }
}

int main() {
  No* raiz = NULL;
  int operacao = -1;
  int valor;
  
  const char* menu =  "--------------- LORAX ---------------\n"
                      "Bem vindo ao Lorax! Aqui voce podera\n"
                      "construir sua propria arvore com as\n"
                      "seguintes operacoes\n"
                      "Digite 1: Inserir Valor\n"
                      "Digite 2: Remover Valor\n"
                      "Digite 3: Buscar Valor\n"
                      "Digite 4: Exibir em Ordem\n"
                      "Digite 5: Exibir menu\n"
                      "Digite 0: Finalizar operacoes\n"
                      "-------------------------------------\n";

  printf("%s", menu);

  while (operacao != 0){
    printf("\n--------------------------------");
    printf("\nInsira um digito de operacao: ");
    scanf("%d", &operacao);

    switch (operacao) {
      case 0:
        printf("\n-------------------------------\n");
        printf("Encerrando operacoes, obrigado!");
        printf("\n-------------------------------\n");

        break;

      case 1:
        printf("\nInforme o valor da nova folha: ");
        scanf("%d", &valor);

        raiz = inserir(raiz, valor);
        printf("Operacao de insercao concluida!\n");
        break;
      
      case 2:
        if (raiz != NULL) {
          printf("\nInforme o valor da folha que sera removida: ");
          scanf("%d", &valor);
  
          raiz = remover(raiz, valor);
          printf("Operacao de remocao concluida!\n");
        } else {
          printf("\nA arvore ainda nao existe, voce nao pode remover itens!\n");
        }
        
        break;

      case 3:
        if (raiz != NULL) {
          printf("\nInforme o valor da folha que voce deseja encontrar: ");
          scanf("%d", &valor);

          encontrarValor(raiz, valor);
        } else {
          printf("\nA arvore ainda nao existe, voce nao pode localizar itens!\n");
        }
        break;

      case 4:
        if (raiz != NULL) {
          printf("Arvore em ordem: \n");
          emOrdem(raiz);
          printf("\n");
        } else {
          printf("\nA arvore ainda nao existe, voce nao pode imprimir-la!\n");
        }
        break;

      case 5:
        printf("%s", menu);
        break;

      default:
        printf("Opcao invalida! (Nenhuma operacao correspondente)\n");
    }
  }

  return 0;
}