#include <stdio.h>

int main(void) {
    int horas, velocidade;
    double distanciaPercorrida, quantLitros;
    
    scanf("%d", &horas);
    scanf("%d", &velocidade);
    
    distanciaPercorrida = velocidade * horas;

    quantLitros = distanciaPercorrida / 12.0;
    printf("%.3lf\n", quantLitros);
}