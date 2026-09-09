#include <stdbool.h>
#include <stdio.h>

#define MAX(x, y) ((x)>(y)?(x):(y)) // function macros, we can use them for complex purposes (often called parameterized macros)
#define IS_EVEN(n) ((n)%2==0)

#define DISK_CAPACITY (5 * \
    9*\
    2*\
    23*\
    2)
int main(int argc, char *argv[])
{
    /*
        Using command: 
        gcc myprogram.c -o myprogram
        ./myprogram -l remind.c
    */

    int w = MAX(3, 7);
    int y = IS_EVEN(5); // false
    printf("%d\n", w);
    printf("%d\n", y);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}