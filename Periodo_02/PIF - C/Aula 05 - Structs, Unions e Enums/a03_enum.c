#include <stdio.h>

enum dias {
    seg, ter, qua, qui, sex, sab, dom
};

int main(int argc, char const *argv[])
{
    enum escapes {
        bell='\a', backspace='\b', tab='\t', newline='\n', vertical_tab='\v'
    } typedef escapes;

    enum dias semana1, semana2;
    semana1 = qua;
    semana2 = dom;

    printf("%d", semana1); // Imprime 2

    printf("%d%c%d", 10, newline, 10);

    return 0;
}
