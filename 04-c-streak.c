#include <stdio.h>
#define N 5
void awesome(int *a);
void compute(int a[]);
void unchangeable();

int main()
{
    // basically, what they're trying to say is 
    unchangeable();
    const int *y = (int[]){1, 2, 3};
    printf("Value of y is %d, %d, %d\n", *y, *(y+1), *(y+2));
    int b[] = {1, 2, 3, 4, 5};
    int r[] = {1,2, 3, 4, 5, 6, 6, 7, 8, 9, 10};
    
    // when using pointers in c, const char* differences

    const char* q = "Aweosome"; // individual values cannot be changed, but can point to somewhere else
    char* const x = "Awesome"; // cannot point elsewhere but individual values can be changed
    const char* const z = "Michael"; // value cannot be changed
    compute(r);
    awesome(b);

    for (int i = 0; i < N; i++)
    {
        printf("Answer is %d\n", b[i]);
    }
}

void awesome(int *a)
{
    for (int *p = a; p < a + N; p++)
    {
        *p += 5;
    }
}

void compute(int a[])
{
    printf("The size of my internal array is %zu\n", sizeof(a)/sizeof(a[0]));
}

void unchangeable()
{
    const char *x = "Joseph";
    printf("second value is %c\n", x+2);
}