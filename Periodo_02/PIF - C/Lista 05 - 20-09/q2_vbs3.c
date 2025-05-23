#include <stdio.h>

struct Pilotos{
    char nome[100];
    int numero;
    double tempoCorrida;
} typedef Pilotos;

void ordenarPorTempo(Pilotos pilotos[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(pilotos[i].tempoCorrida > pilotos[j].tempoCorrida){
                Pilotos temp = pilotos[i];
                pilotos[i] = pilotos[j];
                pilotos[j] = temp; 
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        fprintf(stderr, "Número inválido de pilotos\n");
        return 1;
    }

    Pilotos pilotos[n];

    for(int i = 0; i < n; i++){
        scanf("%99s %d %lf", pilotos[i].nome, &pilotos[i].numero, &pilotos[i].tempoCorrida);
    }

    ordenarPorTempo(pilotos, n);
    printf("Vencedor: %s %d\n", pilotos[0].nome, pilotos[0].numero);

    for(int i = 0; i < n; i++){
            printf("%s %d %.2lf\n", pilotos[i].nome, pilotos[i].numero, pilotos[i].tempoCorrida);
    }

    return 0;
}
