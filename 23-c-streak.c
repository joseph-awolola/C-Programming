#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char* str1, const char* str2);
void changingSize();

int main()
{
    char *x = "Joseph";
    printf("%s", concat(x, "Michael"));
    return 0;
}

char *concat(char* str1, const char* str2)
{
    int len1, len2, size;
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);
    size = len1+len2;
    char *p = malloc(size+1);

    strcpy(p, str1);
    strcat(p, str2);

    
    return p;
}


// doesn't work, please fix this
void changingSize()
{
    int i, n = 0, *a;
    
    do
    {
        printf("Enter the number you want to store in the array: ");
        scanf("%d", &i);

        if (i == -1) break;
        n++;
        a = malloc(n * sizeof(int)); 
        *a++ = i;
    } while (true);
    
}