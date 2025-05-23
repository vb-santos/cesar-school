#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float base;
  float altura;
} Retangulo;

float calcularPerimetro(Retangulo retangulo) {
  return retangulo.altura*2 + retangulo.base*2;
}

float calcularArea(Retangulo retangulo) {
  return retangulo.altura * retangulo.base;
}

int main() {
  Retangulo retangulo;

  printf("Insira o valor da base e da altura do retangulo em metros: ");
  scanf("%f %f", &retangulo.altura, &retangulo.base);

  float perimetro = calcularPerimetro(retangulo);
  float area = calcularArea(retangulo);

  printf("O retangulo com altura %.2fm e base %.2fm, possui area de %.2fm quadrados e perimetro de %.2fm", 
    retangulo.altura,
    retangulo.base,
    area,
    perimetro
  );

  return 0;
}