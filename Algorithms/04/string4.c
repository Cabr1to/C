#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main (){
    setlocale(LC_ALL, "Portuguese");

    char s1[N] = {"Logica de "};
    char s2[N] = {"Programacao!"};

    printf("Antes do strcat: \n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1,s2);

    printf("Depois de 'strcat': \n");
    puts(s1);
}