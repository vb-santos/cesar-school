#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroAtual;
    int quantidade = 0;
    int *vetor = malloc(quantidade * sizeof(int));

    while(scanf("%d", &numeroAtual) == 1){
        if (numeroAtual == 0) break;

        quantidade++;
        vetor = realloc(vetor, quantidade * sizeof(int));
        vetor[quantidade - 1] = numeroAtual;
    }

     for(int i = 0; i < quantidade; i++){
        if (i > 0) {
            printf(" ");
        }
        printf("%d", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}