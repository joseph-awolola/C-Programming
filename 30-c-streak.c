#include <stdio.h>

int *(*x[10])(void);

int *func(int a, int b)
{
    int arr[] = { a, b };
    return arr;
}

int main()
{
    static int z;
    printf("%d\n", z);
    int i = 5/2;
    return 0;
}