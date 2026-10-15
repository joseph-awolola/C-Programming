#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dir = opendir(".");
    
    char input[1024], src[1024] = "";
    struct dirent *entry;

    if (dir == NULL)
    {
        printf("Doesn't work\n");
        perror("opendir");
        return 1;
    }

    if (argc > 1)
    {
        strcpy(src, argv[1]);
    }

    do
    {
       fgets(input, sizeof input, stdin);
        input[strcspn(input, "\n")] = '\0';

        
        

        if (strcmp(input, "ls") == 0)
        {
            if (src != '\0')
            {
                printf("You want to show content from this directory");
                
            } else 
            {
                while ((entry = readdir(dir)) != NULL)
                {
                    printf("%s\n ", entry->d_name);
                }
                printf("\n");

            }
            }
        
        if (strcmp(input, "exit") == 0)
        {
            printf("Exiting...\n");
            break;
        }
    } while (input != NULL);
    
    closedir(dir);
    return 0;
}