#include <stdio.h>;

void calcularSoma(int *soma, int a, int b){
    *soma = a + b;
}

void calcularSubtracao(int *subtracao, int a, int b){
    *subtracao = a - b;
}

void calcularMultiplicacao(int *multi, int a, int b){
    *multi = a * b;
}

void calcularDivisao(int *divisao, int a, int b){
    if(b == 0){
        *divisao = -1;
    } else {
        *divisao = a / b;
    }
}

int main(int argc, char const *argv[])
{
    int a, b, soma, subtracao, multi, divisao;
    scanf("%d %d", &a, &b);

    calcularSoma(&soma, a, b);
    calcularSubtracao(&subtracao, a, b);
    calcularMultiplicacao(&multi, a, b);
    calcularDivisao(&divisao, a, b);

    printf("%d\n", soma);
    printf("%d\n", subtracao);
    printf("%d\n", multi);    

    if(divisao == -1){
        printf("Divisão por zero\n");
    } else {
        printf("%d\n", divisao);
    }

    return 0;
}
