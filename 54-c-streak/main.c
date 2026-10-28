#include <stdio.h>
#include <string.h>

int main()
{
    // hex dump utility
    FILE *fp = fopen("test.txt", "rb");
    char txt[1024];

    size_t bytes_read = fread(txt, sizeof(txt[0]), sizeof(txt) / sizeof(txt[0]), fp);
    if (txt[bytes_read] != EOF) 
    {
        printf("File reading is not over\n");
    }
    else {
        printf("File reading is over\n");
    }
    printf("%d\n", bytes_read);
    printf("%s\n", txt);
    return 0;
}