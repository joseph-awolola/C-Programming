#include <stdio.h>

const char* my_strcpy(char *str1, const char* str2);
char* my_strcat(char* str1, const char* str2);

int main()
{
    // array of strings
    char words[][15] = { "Food", "Contrary", "Beyonds scary","young man", "secretary", "hunger", "younger", "martyr"};



    return 0;
}

const char* my_strcpy(char *str1, const char* str2)
{
    char *p = str1;
    while (*p++ = *str2++)
        ;
    return str1;
}

char* my_strcat(char* str1, const char* str2)
{
    char *p = str1;
    while (*p != '\0')
    {
        p++;
    }

    while (*str2 != '\0')
    {
        *p = *str2;
        p++;
        str2++;

    }
    *p = '\0';
    return str1;
}

