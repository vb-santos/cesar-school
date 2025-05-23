#include <stdio.h>
#include <math.h>

// Definição da union para armazenar os dados de cada figura
union Figura {
    struct {
        float largura;
        float altura;
    } retangulo;
    struct {
        float raio;
    } circulo;
};

// Struct que une o tipo de figura (identificado por um char) e os dados
struct FiguraGeometrica {
    char tipo;  // 'R' para retângulo, 'C' para círculo
    union Figura figura;
};

// Função para calcular a área de uma figura geométrica
float calcularArea(struct FiguraGeometrica fg) {
    if (fg.tipo == 'R') {  // Retângulo
        return fg.figura.retangulo.largura * fg.figura.retangulo.altura;
    } else if (fg.tipo == 'C') {  // Círculo
        return M_PI * pow(fg.figura.circulo.raio, 2);
    } else {
        return 0;  // Tipo não reconhecido
    }
}

int main() {
    struct FiguraGeometrica fg1, fg2;

    // Inicializando um retângulo
    fg1.tipo = 'R';
    fg1.figura.retangulo.largura = 5.0;
    fg1.figura.retangulo.altura = 10.0;

    // Inicializando um círculo
    fg2.tipo = 'C';
    fg2.figura.circulo.raio = 3.0;

    // Calculando e exibindo as áreas
    printf("Área do retângulo: %.2f\n", calcularArea(fg1));
    printf("Área do círculo: %.2f\n", calcularArea(fg2));

    return 0;
}
