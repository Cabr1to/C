#include <stdio.h>
#include <stdlib.h>

// struct para um item da losta que possui um int
typedef struct ElementoLista Item;
struct ElementoLista
{
    int valor;
    struct ElementoLista *prox;
};

// prototipos
void imprime(Item *head);
void insere(Item *head);
void libera(Item *head);

// funcao main
int main()
{
    // cria a cabeca da lista
    Item head;
    head.prox == NULL;

    printf("sizeof (celula) = %d\n", sizeof(Item));
}

void imprime(Item *head)
{
    if (head != NULL)
    {
        printf("%d\n", head->valor);
        imprimir(head->prox);
    }
}
