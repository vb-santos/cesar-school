#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  char telefone[15];
} Contato;

Contato* adicionarContato(Contato* agenda, int* numero_contatos) {
  Contato novo_contato;

  printf("Informe o nome e o numero de telefone do novo contato: ");
  scanf("%49s %14s", novo_contato.nome, novo_contato.telefone);

  (*numero_contatos)++;
  Contato* temp = (Contato*)realloc(agenda, *numero_contatos * sizeof(Contato));

  agenda = temp;
  agenda[*numero_contatos - 1] = novo_contato;

  return agenda;
}

Contato pesquisarContato(Contato* agenda, int numero_contatos, char nome_contato[50]) {
  Contato contato_encontrado;

  for (int i = 0; i < numero_contatos; i++){
    if (strcmp(agenda[i].nome, nome_contato) == 0) {
      contato_encontrado = agenda[i];
      break;
    }
  }

  if (strlen(contato_encontrado.nome) == 0) {
    printf("Contato não encontrado!\n");
    Contato contato_vazio = {"", ""};
    return contato_vazio;
  }

  return contato_encontrado;
}

int main() {
  int numero_contatos;
  printf("Insira o numero de contatos da agenda: ");
  scanf("%d", &numero_contatos);

  Contato* agenda = (Contato*)malloc(numero_contatos * sizeof(Contato));

  for (int i = 0; i < numero_contatos; i++) {
    printf("Informe o nome e o telefone do %do contato: ", i+1);
    scanf("%49s %14s", agenda[i].nome, agenda[i].telefone);
  }

  agenda = adicionarContato(agenda, &numero_contatos);

  printf("------------ LISTA DE CONTATOS ------------");
  for (int i = 0; i < numero_contatos; i++) {
    printf("\nContato: %s\nTelefone:%s\n", agenda[i].nome, agenda[i].telefone);
  }

  char nome_contato[50];
  printf("\nInforme o nome do contato a ser pesquisado: ");
  scanf("%49s", nome_contato);

  Contato contato_pesquisado = pesquisarContato(agenda, numero_contatos, nome_contato);
  printf("\nNome do contato pesquisado: %s\nTelefone do contato pesquisado: %s\n",
    contato_pesquisado.nome,
    contato_pesquisado.telefone
  );

  free(agenda);
  return 0;
}