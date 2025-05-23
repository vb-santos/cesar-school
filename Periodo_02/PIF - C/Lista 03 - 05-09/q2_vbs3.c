#include <stdio.h>

int main() {
    double M [12][12];
    int L, linha, coluna;
    char T;
    double resultado = 0.0, media;

    scanf("%d", &L);
    scanf("%c", &T);
    T = getchar();

    for(linha = 0; linha < 12; linha++){
        for(coluna = 0; coluna < 12; coluna++){
            scanf("%lf", &M[linha][coluna]);
        }
    }

    for(coluna = 0; coluna < 12; coluna++){
        resultado += M[L][coluna];
    }

    if(T == 'S'){
        printf("%.1lf\n", resultado);
        }
    else if(T == 'M'){
        media = resultado/12;
        printf("%.1lf\n", media);
    }

    return 0;
}