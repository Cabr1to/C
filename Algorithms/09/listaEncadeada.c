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
    head.prox = NULL;

    printf("sizeof (Item) = %d\n", sizeof(Item));

    // Inserindo dados...

    printf("\nInserindo itens novos...\n");
    insereFim(&head, 30);
    insereFim(&head, 19);
    insereFim(&head, 134);

    system("PAUSE");

    // Imprimir os itens da lista
    printf("\nImprimindo os itens\n");
    imprime(&head);

    system("PAUSE");

    // Libera memoria
    printf("\nLIberando memoria dos itens\n");
    libera(&head);
    return 0;
}

void imprime(Item *head)
{
    Item *atual = head->prox;

    if (atual != NULL)
    {
        printf("%d\n", atual->valor);
        imprime(head->prox);
    }
}

void insereFim(Item *head, int valor)
{
    // Cria um ponteiro para o novo item e aloca dinamicamente
    Item *novo = (Item *)malloc(sizeof(Item));

    novo->prox = NULL;
    novo->valor = valor;

    printf("Item de valor %3d alocado no endereco: %x\n", novo->valor, novo);

    // varre a lista do comeco para chegar na ultima posicao
    Item *atual = head;
    while (atual->prox != NULL)
    {
        atual = atual->prox;
    }

    // chegando na ultima posicao adiciona o novo elemento
    atual->prox = novo;
}

void libera(Item *head)
{
    // ponteiro para o inicio da lista
    Item *atual = head->prox;

    Item *liberado;

    while (atual != NULL)
    {
        liberado = atual;

        atual = atual->prox;
        printf("Liberando o item de valor %3d na posicao %x\n", liberado->valor, liberado);

        free(liberado);
    }
}
