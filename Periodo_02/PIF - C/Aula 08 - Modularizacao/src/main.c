#include <stdio.h>
#include "../include/operacoes.h"

int main() {
    int num1 = 5, num2 = 3;
    int resultado = soma(num1, num2);
    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);
    return 0;
}

// Para rodar:
// gcc ../src/*.c -I ../include/ -o main
// ./main