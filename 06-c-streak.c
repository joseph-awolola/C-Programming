#include <stdio.h>
#define ROWS 8
#define COLS 7
#define N 10

void arr_reversal(int n, int a[n]);
int sum_array(const int *a, int n);

int main()
{
    int b[] = {1,2, 3,4, 5, 6, 7, 8, 9, 10};
    printf("Sum of the array is %d\n", sum_array(b, N));
    arr_reversal(N, b);
    return 0;
}

void array(int n)
{
    int a[n][5], (*p)[n];
    p = a;
}

void arr_reversal(int n, int a[n])
{
    // example int a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    int *p = &a[0], *q = &a[N-1], temp;
    while(p < q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
}

int sum_array(const int *a, int n)
{
    int sum = 0;
    for (const int *p = a; p < a + n; p++)
    {
        sum += *p;
    }
    return sum;
}