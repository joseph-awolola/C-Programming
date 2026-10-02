#include <stdio.h>

int main()
{
    fprintf(stderr, "Everybody dance now\n");

    char str[50];
    FILE *file = fopen("test.txt", "r");

    fgets(str, 50, file);
    printf("%s\n", str);

    return 0;
}