#include <stdio.h>;

void calcularProduto(int a, int b, int c, int *multi){
    if((a*b) > (b*c) && (a*b) > (a*c)){
        *multi = a*b;
    } else if ((b*c) > (a*b) && (b*c) > (a*c)){
        *multi = b*c;
    } else{
        *multi = a*c;
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c, multi;
    scanf("%d %d %d", &a, &b, &c);

    calcularProduto(a, b, c, &multi);
    printf("%d\n", multi);

    return 0;
}
