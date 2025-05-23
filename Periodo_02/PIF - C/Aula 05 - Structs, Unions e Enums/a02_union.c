#include <stdio.h>

union Sensor{
    float temperatura;
    float umidade;
    char estado;
} typedef Sensor;

int main(int argc, char const *argv[])
{
    Sensor sensor;
    sensor.temperatura = 25.5;
    sensor.umidade = 60; // Apaga o valor de temperatura
    sensor.estado = 'o';
    printf("Temperatura: %.2f\n", sensor.temperatura);
    // Ocupa o tamanho do maior atributo


    return 0;
}
