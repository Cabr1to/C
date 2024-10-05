#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Node head;
    head.next = NULL;

    printf("Sizeof(Node): %d\n", sizeof(Node));

    InsertNode(&head, 5);
    InsertNode(&head, 455);
    InsertNode(&head, 541);
    printf("\n");

    ShowList(&head);
    Free(&head);
    
}