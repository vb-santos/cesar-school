#include <stdio.h>;

void dist(float metros, float *jardas, float *pes, float *polegadas){
    *jardas = metros * 1.0940;
    *pes = metros * 3.2810;
    *polegadas = metros * 39.3701;
}

int main(int argc, char const *argv[])
{
    float metros, jardas, pes, polegadas;

    metros = 10;
    dist(metros, &jardas, &pes, &polegadas);

    printf("\n%.2f metros equivalem a:\n", metros);
    printf("%.2f jardas\n", jardas);
    printf("%.2f pés\n", pes);
    printf("%.2f polegadas\n", polegadas);

    return 0;
}
