#include <stdio.h>
#include <string.h>

void day_reminder();

int main()
{
    // char str1[] = "Joseph";
    // char str2[] = "Awesome";
    // if (strcmp(str1, str2) <= 0)
    // {
    //     printf("Less");
    // } else 
    // {
    //     printf("Greater");
    // }

    day_reminder();
}

void day_reminder()
{
    char text[100], date[10];
    printf("Enter in a day and a reminder: ");
    scanf("%s", text);
    for (int i = 0; text[i] != ' '; i++)
    {
        date[i] = text[i];
        text[i] = ' ';
    }
    printf("Date: %s\n", date);
    printf("Text: %s\n", text);
}