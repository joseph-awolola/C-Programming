#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct node 
{
    int value;
    struct node *next;
};

struct node *push_value(struct node *head, int value)
{
    struct node *p = malloc(sizeof(*p));
    p->value = value;
    p->next = head;

    return p;
}   

void print_list(struct node *head)
{
    struct node *p = head;
    while (true)
    {
        if (p->next == NULL) return;
        printf("%d\n", p->value);
        p = p->next;
        
    }
    
}


int main()
{
    struct node *first = NULL;
    first = push_value(first, 10);
    first = push_value(first, 20);

    // come back to this, this didn't work
    print_list(first);
    return 0;
}