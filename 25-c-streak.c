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
    struct node *p = malloc(sizeof *p);
    p->value = value;
    p->next = head;

    return p;
}   

void print_list(const struct node *head)
{
    for (const struct node *p = head; p != NULL; p = p->next)
    {
        printf("%d\n", p->value);
    }
    printf("NULL\n");
}

void free_list(struct node *head)
{
    while (head != NULL)
    {
        struct node *next = head->next;
        free(next);
        head = next;
    }
}

struct node *search_list(const struct node *head, int n)
{  
    const struct node *p;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->value == n)
            return (struct node *)p;
        
    }
    return NULL;
}

struct node *delete_node(struct node *head, int n)
{
    // here, we're not done with this side
    struct node *cur, *prev = NULL;

    for (cur = head; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
        ;

    if (cur == NULL) return head;

    if (prev == NULL) head = head->next;
    else 
        prev->next = cur->next;
    free(cur);

    return head;
}

int main()
{
    struct node *first = NULL;
    first = push_value(first, 10);
    first = push_value(first, 20);
    first = push_value(first, 30);

    // come back to this, this didn't work
    print_list(first);
    
    search_list(first, 20);
    return 0;
}