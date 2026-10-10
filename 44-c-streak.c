#include <stdio.h>

int file_copy(char *, char *);

// file copy utility in c
int main()
{
    file_copy("test.txt", "unkowntest.txt");
    return 0;
}

int file_copy(char *source_file, char *dest_file)
{
    FILE *fp1, *fp2;
    char content[8192];
    size_t bytes_read; 
    if ((fp1 = fopen(source_file, "rb")) == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    if ((fp2 = fopen(dest_file, "wb")) == NULL)
    {
        fclose(fp1);
        printf("Error opening file\n");
        return 1;
    }
    

    while ((bytes_read = fread(content, 1, sizeof content, fp1)) > 0)
    {
        fwrite(content, 1, bytes_read, fp2);
    }
    
    if (fclose(fp1) == EOF) return 1;
    if (fclose(fp2) == EOF) return 1;

    return 0;

}