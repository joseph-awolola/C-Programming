#include <stdio.h>
#define N 5

int main()
{
    int a[] = {2, 4, 5, 2, 5}, j = 12, *p, sum = 0;
    p = a;
    for (int i = 0; i < N; )
    {
        *p++ = j;
    }   
    for (int i = 0; i < N; i++)
    {
        printf("A is %d", a[i]);
    }

    p = &a[0];
    while (p < &a[N])
    {
        sum += *p++;
    }
    printf("Sum of all values are %d", sum);

    // using an array name as a pointer
    int b[] = { 1, 2, 3, 4, 5 };
    *b = 12;
    *(b + 1) = 8;

}