#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE 100

typedef union 
{
    int i;
    double d;
} Number;

enum values 
{
    awesome, 
    noble,
    kind,
    thats_me
} s1, s2;

int main()
{
    int y, *x;
    if (!x) printf("It is empty %p\n", x);
    else printf("It is full %p\n", y);
    //    u.i = 12;
    

    return 0;
}