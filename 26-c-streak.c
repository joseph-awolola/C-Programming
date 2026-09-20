#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// creating a linked list
struct node 
{
    int value;
    struct node *newNode;
};

void push_value(struct node *head, int newVal)
{
    struct node *p = malloc(sizeof(struct node));

    p->value = newVal;
    p->newNode = head;

    return p;
}

void print_values(struct node *head)
{
    while (true)
    {
        printf("%d\n", head->value);
        if (head->newNode == NULL)
            break;
        
        

    }
}
int main()
{
    return 0;
}

