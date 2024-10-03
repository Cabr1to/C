#include <stdio.h>
#include <stdlib.h>

void imprimir(celula *lista);

int main (){
   
    typedef struct celula celula;
    struct celula {
        int conteudo;
        celula *prox_celula;
    };

    celula* celula(int conteudo, celula* prox){
        celula* celula = malloc(sizeof(celula));
        celula->conteudo = conteudo;
        celula->prox_celula = prox_celula;
    }


    celula *lista;
    lista = malloc(sizeof(celula));
    lista->prox = NULL;

   printf ("sizeof (celula) = %d\n", sizeof (celula));

}



void imprimir(celula *lista){
    if (lista != NULL){
        printf("%d\n", lista->conteudo);
        imprimir(lista->prox);
    }
}
