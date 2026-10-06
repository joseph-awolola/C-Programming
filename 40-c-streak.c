#include <stdio.h>

int main(int argc, char *argv[])
{
// copying a file
    // FILE *source_file, *dest_file;
    // int ch;

    // source_file = fopen("test.txt", "rb");
    // dest_file = fopen("test2.txt", "wb");
    // // if (argc != 3)
    // // {
    // //     fprintf(stderr, "usage: fcopy source destination\n");
    // //     exit();
    // // }

    // // if ((source_file = fopen(argv[1], "rb")) != NULL)
    // // {
    // //     fprintf(stderr, "Can't open source file\n");
    // // }

    // // if ((source_file = fopen(argv[2], "wb")) != NULL)
    // // {
    // //     fprintf(stderr, "Can't open destination file\n");
    // // }
    
    // while ((ch = getc(source_file)) != EOF)
    // {
    //     putc(ch, dest_file);
    // }
    // fclose(source_file);
    // fclose(dest_file);

    FILE *source_fp = fopen("test2.txt", "wb");
    // fputs("Awesomeness\n", source_fp);
    char buf[50];

    // file positioning
    fseek(source_fp, 0L, SEEK_SET);
    printf("%s", buf);

    fclose(source_fp);
    return 0;
}