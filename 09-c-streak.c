#include <stdio.h>

const char* read_line(char str[], int n);
int spaces(const char* str, int n);
char *string_cpy(char *str1, char *str2);

int main()
{
    // int n = 24;
    // char a[n];
    // printf("%s\n", read_line(a, n));
    // printf("Number of spaces are %d\n", spaces(a, n));

    char s1[20] = "Joseph";
    const char* s2 = "Michael";

    printf("%s", string_cpy(s1, "Come alive"));
    return 0;
}

const char* read_line(char str[], int n)
{
    char c, i = 0;
    while ((c = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = c;
        } else break;
    }
    
    return str;
}

int spaces(const char* str, int n)
{
    int count = 0;

    for (int i = 0; str[i] != '\0';)
    {
        if (str[i++] == ' ') ++count;

    }
    return count;
}

char *string_cpy(char *str1, char *str2)
{
    printf("hello\n");
    int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        printf("%d", i);
        str1[i] = str2[i];
    }
    str2[i] = '\0';
    return str1;
}

// error: couldn't fix the strcpy function to work well