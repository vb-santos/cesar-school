#include <stdio.h>

long long fatorial(int numero){
    long long fato = 1;

    for(int i = 1; i <= numero; i++){
        fato *= i;
    }
    return fato;
}

long long somaFatorial(int a, int b){
    return fatorial(a) + fatorial(b);
}

int main() {
    int M, N;

    while(scanf("%d %d", &M, &N) != EOF){
            printf("%lld\n", somaFatorial(M, N));
    }
    
    return 0;
}
