#include <stdio.h>

int funcaoRafael(int x, int y)
{
    int resultado = ((3 * x) * (3 * x)) + (y * y);
    return resultado;
}

int funcaoBeto(int x, int y)
{
    int resultado = (2 * (x * x)) + ((5 * y) * (5 * y));
    return resultado;
}

int funcaoCarlos(int x, int y)
{
    int resultado = (-100 * x) + (y * y * y);
    return resultado;
}

int main()
{
    int N, x, y;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);

        int resultadoRafael = funcaoRafael(x, y);
        int resultadoBeto = funcaoBeto(x, y);
        int resultadoCarlos = funcaoCarlos(x, y);

        if (resultadoRafael > resultadoBeto && resultadoRafael > resultadoCarlos)
        {
            printf("Rafael ganhou\n");
        }
        else if (resultadoBeto > resultadoRafael && resultadoBeto > resultadoCarlos)
        {
            printf("Beto ganhou\n");
        }
        else if (resultadoCarlos > resultadoBeto && resultadoCarlos > resultadoRafael)
        {
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}