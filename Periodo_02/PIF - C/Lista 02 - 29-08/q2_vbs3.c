#include <stdio.h>
 
int main() {
 
    int valor, contador;
    scanf("%d", &valor);

    for(contador = 1; contador <= valor; contador++){
        if(contador % 2 == 0){
            continue;
        }
        printf("%d\n", contador);
    }
 
    return 0;
}