#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void InsertNode(Node *head, int value)
{
    Node *new = (Node *)malloc(sizeof(Node));

    new->next = NULL;
    new->value = value;

    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new;

    printf("Novo no alocado: %d\nPosicao:%x\n", new->value, new);
}

void ShowList(Node *head)
{
    Node *current = head->next;

    if (current != NULL)
    { 
        printf("%d ", current->value);
        ShowList(head->next);
    }
    
}


void Free(Node *head)
{
    Node *current = head->next;

    Node *free;

    if (current != NULL){
        free = current;
        printf("\nNode: %d, free\n", free->value);
        Free(head->next);
    }
}