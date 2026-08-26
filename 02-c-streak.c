#include <stdio.h>
#define N 5

int main()
{
    // pointers and arrays
    int *p = (int [N]){ 3, 0, 1, 2, 3};
    int a[5] = { 3, 0, 1, 2, 3}, *q, sum = 0;
    for (int i = 0; i < N; ++i)
    {
       printf("%d\n", *p);
        p += 1;
    }

    for (q = &a[0]; q < &a[N]; q++)
    {
        sum += *p;
    }
    return 0;
}