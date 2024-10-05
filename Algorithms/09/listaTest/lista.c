#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void InsertNode(Node* head, int value)
{
    Node *new = (Node*)malloc(sizeof(Node));

    new->next = NULL;
    new->value = value;

    Node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = new;
}


/*void ShowList(Node* head);
void Free(Node* head);*/