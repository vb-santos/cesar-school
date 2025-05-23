#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char titulo[50];
  char autor[50];
  int ano;
} Livro;

Livro* livrosAposAno(Livro* livros, int ano, int n_livros, int* novo_n_livros) {
  int count = 0;

  for (int i = 0; i < n_livros; i++){
    if (livros[i].ano > ano) {
      count++;
    }
  }

  Livro* livros_filtrados = (Livro*)malloc(count * sizeof(Livro));
  if (livros_filtrados == NULL) {
    *novo_n_livros = 0;
    return NULL;
 }

  int j = 0;
  for (int i = 0; i < n_livros; i++) {
    if (livros[i].ano > ano) {
      livros_filtrados[j] = livros[i];
    
    }
  }

  *novo_n_livros = count;
  return livros_filtrados;
}

int main() {
  int numero_livros;
  printf("Quantos livros você deseja cadastrar? ");
  scanf("%d", &numero_livros);

  Livro* livros = (Livro*)malloc(numero_livros * sizeof(Livro));

  for (int i = 0; i < numero_livros; i++) {
    printf("Informe o titulo, autor e ano de publicacao do livro %d: \n", i+i);
    scanf("%49s %49s %d", livros[i].titulo, livros[i].autor, &livros[i].ano);
  }

  int ano_filtro;
  printf("Informe o ano para filtrar os livros a serem cadastrados: ");
  scanf("%d", &ano_filtro);

  int novo_n_livros;
  Livro* livros_filtrados = livrosAposAno(livros, ano_filtro, numero_livros, &novo_n_livros);

  printf("\nLivros publicados apos %d:\n", ano_filtro);
  for (int i = 0; i < novo_n_livros; i++){
    printf("Titulo: %s, Autor: %s, Ano: %d\n", 
      livros_filtrados[i].titulo, 
      livros_filtrados[i].autor, 
      livros_filtrados[i].ano);
  }

  free(livros);
  free(livros_filtrados);
  return 0;
}