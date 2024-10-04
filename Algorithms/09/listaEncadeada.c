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
void insereFim(Item *head, int valor);
void libera(Item *head);

// funcao main
int main()
{
    // cria a cabeca da lista
    Item head;
    head.prox == NULL;

    printf("sizeof (Item) = %d\n", sizeof(Item));

    // Inserindo dados...

    printf("\nInserindo itens novos...\n");
    insereFim(&head, 19);
    insereFim(&head, 10);
    insereFim(&head, 50);
}

void imprime(Item *head)
{
    if (head != NULL)
    {
        printf("%d\n", head->valor);
        imprimir(head->prox);
    }
}

void insereFim(Item *head, int valor)
{
    if (head != NULL){
        head->prox = valor;
    }
    
}
