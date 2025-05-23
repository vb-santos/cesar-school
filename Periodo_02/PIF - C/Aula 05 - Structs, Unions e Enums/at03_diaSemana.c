#include <stdio.h>

enum Meses{
    janeiro=1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro
} typedef Meses;

int main()
{
    int mesEscolha;

    printf("Escolha um mês do ano (1 a 12):");
    scanf("%d", &mesEscolha);

    switch (mesEscolha){
    case janeiro:
        printf("Janeiro\n");
        break;

    case fevereiro:
        printf("Fevereiro\n");
        break;

    case marco:
        printf("Março\n");
        break;

    case abril:
        printf("Abril\n");
        break;

    case maio:
        printf("Maio\n");
        break;

    case junho:
        printf("Junho\n");
        break;

    case julho:
        printf("Julho\n");
        break;

    case agosto:
        printf("Agosto\n");
        break;

    case setembro:
        printf("Setembro\n");
        break;

    case outubro:
        printf("Outubro\n");
        break;

    case novembro:
        printf("Novembro\n");
        break;

    case dezembro:
        printf("Dezembro\n");
        break;
    
    default:
        break;
    }

    return 0;
}
