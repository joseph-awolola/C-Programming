#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// next chapter

void name()
{
    printf("Joseph\n");
}

double calc_val(double (*f)(double), double n)
{
    return f(n);
}

void age()
{
    printf("17\n");
}

void blood_type()
{
    printf("O\n");
}
int main()
{
    // arrays to function pointers in c: example of how you can call functions of similar names in C
    void (*pf[])(void) = 
    {
        name,
        age,
        blood_type
    };

    (*pf[2])();

    // printf("%f\n", calc_val(tan, 45.0));

    // restricted pointer
    int *restrict p;
    int *restrict q;

    p = malloc(sizeof(int));

    q = p;
    *q = 12;
    // printf("%d\n", *p);
    
    // flexible array members
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    arr = realloc(arr, n * sizeof(int));
    
    return 0;
}