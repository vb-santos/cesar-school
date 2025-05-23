#include <stdio.h>
 
int main() {
    int T, N;
    unsigned long long int lista [61];
    lista[0] = 0;
    lista[1] = 1;

    for(int indice = 2; indice <= 60; indice++){
        lista[indice] = lista[indice - 1] + lista[indice - 2];
    }

    scanf("%d", &T);
    for(int indice = 1; indice <= T; indice++){
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, lista[N]);
        }

    return 0;
}