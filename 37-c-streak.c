#include <stdio.h>

int main(int argc, char *argv[])
{
    // check if it can be opened
    if (fopen(argv[0], "r") == NULL)
    {
        printf("File cannot be opened\n");
    } 
    else 
    {
        printf("File can be opened\n");
        
    }
    FILE *fp1 = fopen("test.txt", "r");

    // fp1 = freopen("foo", "w", stdout);
    // printf("Hello World\nThis is a new doeument\n");
    // if (fp1 == NULL) printf("Error\n");
    // fclose(fp1);

    FILE *tempfile;
    tempfile = tmpfile();

    
}