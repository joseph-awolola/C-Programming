#include <stdio.h>
// writing large programs
int main(int argc, char *argv[])
{

    char s[] = "Joseph";

    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] >= 'a' && s[i] <= 'z' ? s[i] - 'a' + 'A' : s[i];
    }
    printf("%s", s);
    return 0;
}