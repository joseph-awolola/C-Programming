#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // grep in c
    
    FILE *fp;
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("File couldn't be found\n");
        exit(1);
    }

    char str[1024];
    char word[100];

    // printf("Enter in the word you want to find: ");
    // scanf("%s", word);
    
    while (fgets(str, sizeof str, fp) != NULL)
    {
        if (strstr(str, argv[1]) != NULL)
        {
            printf("%s\n", argv[1]);
        }
    }
    fclose(fp);
    
}