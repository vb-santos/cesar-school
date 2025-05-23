#include <stdio.h>;

void calcularSomaSubtracao(int *soma, int *subtracao, int a, int b){
    *soma = a + b;
    *subtracao = a - b;
}

int main(int argc, char const *argv[])
{
    int n, a, b, soma, subtracao;
    scanf("%d", &n);

    int listaPares[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        calcularSomaSubtracao(&soma, &subtracao, a, b);
        printf("%d\n", soma);
        printf("%d\n", subtracao);
    }

    return 0;
}
