#include <stdio.h>

size_t my_strlen(const char* str);
const char* my_strcat(char* str1, const char* str2);



int main()
{
    char person[20] = "Joseph";
    printf("%s", my_strcat(person, "Michael"));
    // printf("%d", my_strlen(person));

    return 0;
}

size_t my_strlen(const char* str)
{
    // version 1
    // size_t i = 0;
    // while (*str++) i++;
    // return i;

    // version 2 (faster version)
    // const char *p = str;
    // while (*p) p++;
    // return p - str;

    // Another way to write array loops in c
    int i = 0;
    for (; *str != '\0'; str++)
    {
        i++;
    }
    return i;
}

const char* my_strcat(char* str1, const char* str2)
{
    char *p = str1;
    while (*p != '\0')
    {
        p++;
    }
    while (*str2 != '\0');
    {
        *p = *str2;
        p++;str2++;
    }
    *p = '\0';
    return str1;

    
}