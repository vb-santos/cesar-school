#include <stdio.h>
 
int main() {
 
    double dinheiro;
    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, moeda1=0, moeda50=0, moeda25=0, moeda10=0, moeda05=0, moeda01=0;


    scanf("%lf", &dinheiro);


    while(dinheiro >= 100){
        nota100++;
        dinheiro -= 100;
    }

    while(dinheiro >= 50){
        nota50++;
        dinheiro -= 50;
    }

    while(dinheiro >= 20){
        nota20++;
        dinheiro -= 20;
    }

    while(dinheiro >= 10){
        nota10++;
        dinheiro -= 10;
    }

    while(dinheiro >= 5){
        nota5++;
        dinheiro -= 5;
    }

    while(dinheiro >= 2){
        nota2++;
        dinheiro -= 2;
    }


    while(dinheiro >= 1){
        moeda1++;
        dinheiro -= 1;
    }

    while(dinheiro >= 0.50){
        moeda50++;
        dinheiro -= 0.50;
    }

    while(dinheiro >= 0.25){
        moeda25++;
        dinheiro -= 0.25;
    }

    while(dinheiro >= 0.10){
        moeda10++;
        dinheiro -= 0.10;
    }

    while(dinheiro >= 0.05){
        moeda05++;
        dinheiro -= 0.05;
    }

    while(dinheiro >= 0.01){
        moeda01++;
        dinheiro -= 0.01;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda05);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);

    return 0;
}