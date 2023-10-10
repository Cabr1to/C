#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){

    char hardtext[N] = {"/cabrito"};
    char senha[N];
    int ok;

    printf("Digite a senha:\n");
    gets(senha);

    ok = strcmp(hardtext, senha);

    if(ok == 0)
        printf("Login sucedido.\n");
    else
        printf("Senha incorreta.\n");

}