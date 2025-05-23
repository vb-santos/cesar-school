#include <stdio.h>
 
int main() {
    int numeroEscolhido, resultado;
    int linha, coluna;
    while(scanf("%d", &numeroEscolhido) && numeroEscolhido != 0){
        for(linha = 1; linha <= numeroEscolhido; linha++){
            for(coluna = 1; coluna <= numeroEscolhido; coluna++){
                if(linha < coluna){
                    resultado = ((linha - coluna) * -1) + 1;
                } else if(linha > coluna){ 
                    resultado = (linha - coluna) + 1;
                } else if(linha == coluna){
                    resultado = 1;
                }

                if(coluna < numeroEscolhido){
                    printf("%3d ", resultado);
                } else if(coluna == numeroEscolhido){
                    printf("%3d", resultado);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}