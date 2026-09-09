#include <stdio.h>
#include <string.h>

#define LEN 8

const char* my_strcmp(char* s1, const char* s2);

int main(int argc, char *argv[])
{
    // printing out the first letters in an array
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    char *input;

    // printf("Enter in and I'll check if its a planet: ");
    //     scanf("%s", input);
    // for (int i = 0; i < LEN; i++)
    // {
        
    //     if (strcmp(input, planets[i]) == 0)
    //     {
    //         printf("This is a planet");
    //         break;
    //     }
    // }

    printf("%s", my_strcmp("Joseph", "Joseph"));

    return 0;
}

// const char* my_strcmp(char* s1, const char* s2)
// {
//     for (int i = 0; s1[i] != '\0'; i++)
//     {
//         if (s1 == s2) continue;
//         else { return "False"; }
//     }
//     return "True";


// }