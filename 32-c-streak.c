#include <stdio.h>

int main()
{
    int i = 0x00ff;
    int j = 3;
    i &= ~(1 << j);
    // printf("%x", i);

    // fix this
    char message[] = "Trust noone, Donald Trump is guilty.";
    char z[] = malloc(sizeof(message));
    int x = 0x00ff;
    for (int i = 0; message[i] != '\0'; i++)
    {
        z[i] = x ^ message[i];
    }

    printf("%s", z);
    // printf("%x", (0x0070 | 0x0050));
    return 0;
}