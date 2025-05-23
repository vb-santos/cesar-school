#include <stdio.h>
 
struct Autor{
    char nomeAutor[50];
    char sobrenomeAutor[50];
} typedef Autor;

struct Data{
    int dia;
    int mes;
    int ano;
} typedef Data;

struct Livro{
    char tituloLivro[100];
    Autor autor;
    Data dataPublicacao;
} typedef Livro;

int main() {
    Livro livro;
    fgets(livro.tituloLivro, sizeof(livro.tituloLivro), stdin);
    livro.tituloLivro[strcspn(livro.tituloLivro, "\n")] = '\0';

    fgets(livro.autor.nomeAutor, sizeof(livro.autor.nomeAutor), stdin);
    livro.autor.nomeAutor[strcspn(livro.autor.nomeAutor, "\n")] = '\0';;

    fgets(livro.autor.sobrenomeAutor, sizeof(livro.autor.sobrenomeAutor), stdin);
    livro.autor.sobrenomeAutor[strcspn(livro.autor.sobrenomeAutor, "\n")] = '\0';

    scanf("%d", &livro.dataPublicacao.dia);
    scanf("%d", &livro.dataPublicacao.mes);
    scanf("%d", &livro.dataPublicacao.ano);
    
    printf("Título: %s\n", livro.tituloLivro);
    printf("Autor: %s %s\n", livro.autor.nomeAutor, livro.autor.sobrenomeAutor);
    printf("Data de Publicação: %02d/%02d/%04d\n", livro.dataPublicacao.dia, livro.dataPublicacao.mes, livro.dataPublicacao.ano);
 
    return 0;
}