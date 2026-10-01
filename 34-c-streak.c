#include <ctype.h>
#include <stdio.h>

typedef unsigned char BYTE;

int main()
{
    unsigned int addr;
    int i, n;
    BYTE *ptr;

    printf("Address of main function %x\n", (unsigned int)main);
    printf("Address of addr variable %x\n", (unsigned int) &addr);


    printf("Enter a hex address: ");
    scanf("%x", &addr);
    printf("Enter number of bytes to view: ");
    scanf("%d", &n);

    ptr = (BYTE *) addr;
    for (; n > 0; n -= 10)
    {
        printf("%8x", (unsigned int) ptr);

        for (i = 0; i < 10 && i < n; i++)
        {
            printf("%.2x", *(ptr + i));
        }
    }    

    return 0;
}