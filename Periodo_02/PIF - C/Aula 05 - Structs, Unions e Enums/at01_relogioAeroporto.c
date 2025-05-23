#include <stdio.h>

struct Horario{
    int hora;
    int minuto;
    int segundo;
} typedef Horario;

struct Voo{
    char cidadeOrigem[40];
    char cidadeDestino[40];
    char data[10];
    Horario horarioPartida;
    Horario horarioChegada;
} typedef Voo;

int main()
{
    Horario relogio;
    scanf("%d %d %d", &relogio.hora, &relogio.minuto, &relogio.segundo);
    printf("%d:%d:%d\n", relogio.hora, relogio.minuto, relogio.segundo);

    Voo planejamentoVoo;
    printf("Informe as cidades de partida e de destino do seu voo:\n");
    scanf("%s %s", planejamentoVoo.cidadeOrigem, planejamentoVoo.cidadeDestino);

    printf("Informe a data do seu voo (dd/mm/aaa):\n");
    scanf("%s", planejamentoVoo.data);

    printf("Informe o horário de partida (hora minuto segundo):\n");
    scanf("%d %d %d", &planejamentoVoo.horarioPartida.hora, &planejamentoVoo.horarioPartida.minuto, &planejamentoVoo.horarioPartida.segundo);

    printf("Informe o horário de chegada (hora minuto segundo):\n");
    scanf("%d %d %d", &planejamentoVoo.horarioChegada.hora, &planejamentoVoo.horarioChegada.minuto, &planejamentoVoo.horarioChegada.segundo);

    printf("%s -> %s\nData: %s\n", planejamentoVoo.cidadeOrigem, planejamentoVoo.cidadeDestino, planejamentoVoo.data);
    printf("Saída: %02d:%02d:%02d, Chegada: %02d:%02d:%02d\n",
           planejamentoVoo.horarioPartida.hora, planejamentoVoo.horarioPartida.minuto, planejamentoVoo.horarioPartida.segundo,
           planejamentoVoo.horarioChegada.hora, planejamentoVoo.horarioChegada.minuto, planejamentoVoo.horarioChegada.segundo);

    return 0;
}
