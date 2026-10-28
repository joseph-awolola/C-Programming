#include <stdio.h>
#include <string.h>

int main()
{
    // hex dump utility
    /*
    Algorithm
    Read a file in binary mode
    Convert the content to hexadecimal form
    Print the output
    */

    FILE *fp = fopen("hello.txt", "rb");
    int bytes_read = 0;
    if (fp == NULL)
    {
        perror("File could not be opened\n");
        return 1;
    }

    char txt[1024];
    size_t read = fread(txt, sizeof(char), 8, fp);
    printf("%s\n", txt);

    // converting string to hex form

    while (true)
    {
        bytes_read += (int)read;

        // URGENT: DO NOT SKIP OVER WHAT WE'RE DOING HERE, WE'RE DOING A HEX DUMP UTILITY TOOL AND ITS MANDATORY WE FINISH, WE'RE ALMOST THERE, 
        // WE JUST NEED TO FIGURE OUT HOW TO SEQUENTIALLY READ DATA FROM THE FILE WITHOUT LOOSING TRACK
    }
    
    for (int i = 0; i < strlen(txt); i++)
    {
        printf("%02X    ", txt[i]);
        
    }

    printf("Word: %s", txt);
    fclose(fp);
    return 0;
}