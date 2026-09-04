#include <stdio.h>
#include <string.h>

char *string_cpy(char *str1, char *str2);
size_t string_len(const char* str);

int main()
{
    // char str1[] = "Awesome";
    // char str2[] = "Wonderfuloso";
    // strncpy(str1, str2, sizeof(str1) - 1);
    // str1[sizeof(str1) - 1] = '\0';
    // printf("%s\n", str1);

    // char text[] = "Joseph";
    // printf("%s\n", string_cpy(text, "Michael"));

    // printf("%c\n", strlen(str2));

    // char *test = "I payed for it \0Now I'm the villain in your history";
    // printf("%s", test);


    printf("%d", string_len("tick tick boom"));

    char t1[100] = "Joseph";
    printf("%s", strcat(t1, "I don't care"));
    return 0;
}



char *string_cpy(char *str1, char *str2)
{
    int i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    return str1;
}

// error: couldn't fix the strcpy function to work well

size_t string_len(const char* str)
{
    size_t count = 0;
    for (int i = 0; str[i] != '\0'; i++, count++);
    return count;
}