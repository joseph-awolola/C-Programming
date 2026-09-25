#include <stdio.h>

int main()
{
    // bitwise operators in c
    // int i = 0x101100;
    // int j = 0x001001;
    // i |= j;
    // clearing a bit
    int i = 0x00ff;
    int j = 0x0110;
    i &= j;
    printf("%x", j);
    return 0;
}