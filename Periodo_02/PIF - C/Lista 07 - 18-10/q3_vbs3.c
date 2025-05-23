#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    double nota;
} Alunos;

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);

    Alunos *alunos = malloc(N * sizeof(Alunos));
    Alunos alunoMaiorNota = alunos[0];

    for(int i = 0; i < N; i++){
        scanf("%s %lf", alunos[i].nome, &alunos[i].nota);
    }

    for(int i = 0; i < N; i++){
        if(alunos[i].nota > alunoMaiorNota.nota){
            alunoMaiorNota = alunos[i];
        }
    }

    printf("%s %.1lf\n", alunoMaiorNota.nome, alunoMaiorNota.nota);

    return 0;
}
