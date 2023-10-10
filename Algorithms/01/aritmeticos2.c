#include <stdio.h>

int main()
{
    int dado;
    dado = 10;
    printf("Dado puro: %d. \n", dado);

    dado++;
    printf("Dado ao incrementar +1: %d. \n", dado);

    dado--;
    printf("Dado ao decrementar -1: %d. \n", dado);

    dado += 15;
    printf("Dado ao incrementar +15 unidades: %d. \n", dado);

    dado -= 5;
    printf("Dado ao decrementar -5 unidades: %d. \n", dado);

    dado *= 10;
    printf("Dado ao multiplicar 10 unidades: %d. \n", dado);

    dado /= 20;
    printf("Dado ao dividir 20 unidades: %d. \n", dado);
}