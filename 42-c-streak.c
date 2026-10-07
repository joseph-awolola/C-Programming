#include <stdio.h>

// cat clone
int main(int argc, char *argv[])
{
    int i = 1;
    while (i < argc)
    {
        printf("%s\n", argv[i]);
        FILE *fp;

        char buffer[1024];
        size_t bytes_read;
        if ((fp = fopen(argv[i], "rb")) == NULL)
        {
            printf("File doesn't exist\n");   
            return 1;

        }

        while ((bytes_read = fread(buffer, 1, sizeof buffer, fp)) > 0)
        {
            fwrite(buffer, 1, bytes_read, stdout);
        }
        i++;
        printf("\n------------------------------------------------------------------------------------------\n");
    } 
    // opening a file
    
    return 0;
}