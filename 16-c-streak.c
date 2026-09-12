#include <stdio.h>
#define TOUPPER(c) (((c) >= 'a') && ((c) <= 'z') ? (c) - 'a' + 'A' : (c))

char *my_toupper(char *s);

int main(int argc, char *argv[])
{
    // printf("Enter in a character: ");
    // char x = getchar();
    // x = TOUPPER(x);
    // printf("Capital is %c", x);

    char* y = my_toupper("joseph");
    // my_toupper(y);
    printf("%s", y);
    return 0;
}

char *my_toupper(char *s)
{
    // Big ol' red flag, i have no idea what I'm doing, please, correct this tomorrow
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = 'a';
    }
    return s;
}

