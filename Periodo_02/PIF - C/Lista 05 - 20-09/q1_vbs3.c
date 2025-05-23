#include <stdio.h>
#include <string.h>
 
struct Candidatos{
    int numeroInscricao;
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;
    char situacao[40];
} typedef Candidatos;

void ordenarPorMedia(Candidatos candidatos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (candidatos[i].media < candidatos[j].media) {
                Candidatos temp = candidatos[i];
                candidatos[i] = candidatos[j];
                candidatos[j] = temp;
            }
        }
    }
}

int main() {
    Candidatos candidato [5];

    for(int i = 0; i < 5; i++){
        scanf("%d %lf %lf %lf %lf", &candidato[i].numeroInscricao, &candidato[i].nota1, &candidato[i].nota2, &candidato[i].nota3, &candidato[i].nota4);

        candidato[i].media = (candidato[i].nota1 + candidato[i].nota2 + candidato[i].nota3 + candidato[i].nota4)/4;
        double arredondar = (int)(candidato[i].media * 100);
        candidato[i].media = arredondar/100;
    }
    
    ordenarPorMedia(candidato, 5);

    for(int i = 0; i < 5; i++){
        if(i == 0 && candidato[i].media > 6.0){
            strcpy(candidato[i].situacao, "Classificado");
        }
        else if(candidato[i].media > 6.0){
            strcpy(candidato[i].situacao, "Aprovado");
        }
        else{
            strcpy(candidato[i].situacao, "Reprovado");
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d %.2lf %s\n", candidato[i].numeroInscricao, candidato[i].media, candidato[i].situacao);
    }

    return 0;
}