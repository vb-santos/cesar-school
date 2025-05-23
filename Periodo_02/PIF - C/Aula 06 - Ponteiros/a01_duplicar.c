#include <stdio.h>;

void duplica(int *p, int *dupli){
    *dupli = *p;
}

int main(int argc, char const *argv[])
{
    int valor, valorCopia;
    valor = 10;
    valorCopia = 0;

    duplica(&valor, &valorCopia);

    printf("%p", valor);
    printf("%p", valorCopia);

    return 0;
}
