#include <stdio.h>
#include <stdlib.h>

int twice(int x);
int square(int x);
int (*pf)(int);

void qsort(void *base, size_t memb, size_t size, int (*comp)(const void *, const void *));

int compare(const void *part_1, const void *part2)
{
    // task for tomorrow, which if its tommorrow, youre reading this now, understand function pointers, and watch some daniel hirsch videos
}
int main()
{
    pf = square;
    printf("%d\n", pf(5));
    pf = twice;
    printf("%d\n", pf(3));
    return 0;
}


int twice(int x)
{
    return  2* x;
}

int square(int x)
{
    return x*x;
}

double integrate(double (*f)(double), double a, double b)
{

}