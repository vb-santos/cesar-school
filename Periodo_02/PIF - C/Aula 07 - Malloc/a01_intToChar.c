#include <stdio.h>
#include <stdlib.h>

char* intToString(int c) {
    // Aloca espaço para 2 caracteres: o caractere em si e o '\0' de terminação
    char *str = (char*)malloc(2 * sizeof(char));

    if (str != NULL) {
        str[0] = (char)c;  // Converte o int para char
        str[1] = '\0';      // Termina a string com '\0'
    }

    return str;
}

int main() {
    int c = 65;  // Exemplo: 65 é o código ASCII para 'A'
    char *result = intToString(c);
    if (result != NULL) {
        printf("Resultado: %s\n", result);
        free(result);  // Lembre-se de liberar a memória alocada
    }

    return 0;
}