#include <stdio.h>


struct s
{
    char a;
    int b[2];
    float c;
};


int main()
{
    // c library overview
    FILE *fp1, *fp2;
    
    fp1 = fopen("text.txt", "r");
    fclose(fp1);
    char words[20];
    fgets(words, 20, fp1);
    printf("Content: %s", words);
    return 0;
}