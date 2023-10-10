#include <stdio.h>

int main () {
    int a, b, soma, sub, multi, div;

    printf("Digite o primeiro valor: \n"); 
    scanf("%d", &a);
    printf("Digite o segundo valor: \n"); 
    scanf("%d", &b);

    soma = a + b; 
    sub = a - b; 
    multi = a * b;
    div = a / b;

    printf("Resultados: \n");
    printf("Soma: %d. \n", soma);
    printf("Subtracao: %d. \n", sub);
    printf("Multiplicacao: %d. \n", multi);
    printf("Divisao: %d. \n", div);
} 