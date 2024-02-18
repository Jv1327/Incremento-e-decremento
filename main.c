#include <stdio.h>

int main () {
    int dado = 10;
    printf("Dado antes do Incremento: %d.\n", dado);

    dado++;
    printf("Depois do Incremento: %d.\n", dado);

    dado --;
    printf("Depois do decremento: %d.\n", dado);

    dado += 3;
    printf("Depois do Incremento em 3 unidades: %d.\n", dado);

    dado -= 2;
    printf("Depois do decremento em 2 unidades: %d.\n", dado);

    dado *= 10;
    printf("Depois de Multiplicar por 10: %d.\n", dado);
}