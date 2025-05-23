#include <stdio.h>
#include <stdlib.h>

int calcularSoma(int *vetor, int N){
    int soma = 0;
    for(int i = 0; i < N; i++){
        soma += vetor[i];
    }
    return soma;
}


int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);

    int *numeros = malloc(N * sizeof(int));

    for(int i = 0; i < N; i++){
        scanf("%d", &numeros[i]);
    }

    int soma = calcularSoma(numeros, N);

    printf("%d\n", soma);

    free(numeros);

    return 0;
}
