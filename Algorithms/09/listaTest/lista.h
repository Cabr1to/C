#include <stdio.h>
#include <stdlib.h>

typedef struct Element Node;
struct Element
{
    int value;
    struct Element* next;
};

void InsertNode(Node* head, int value);
/*void ShowList(Node *head);
void Free(Node *head);*/