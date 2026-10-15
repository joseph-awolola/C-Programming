#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dir = opendir(".");
    
    char input[8192], *token;
    DIR *src = NULL;
    struct dirent *entry;

    if (dir == NULL)
    {
        printf("Doesn't work\n");
        perror("opendir");
        return 1;
    }

    do
    {
        printf("> ");
       fgets(input, sizeof input, stdin);
        input[strcspn(input, "\n")] = '\0';

        token = strtok(input, " ");
        while (token != NULL)
        {          
            if (strcmp(token, "ls") == 0)
            {
                token = strtok(NULL, " ");
                if (token != NULL)
                {
                    printf("%s\n", token);
                    src = opendir(token);
                }

                if (src != NULL)
                {
                    printf("You want to show content from this directory");
                    while ((entry = readdir(src)) != NULL)
                    {
                        printf("%s\n ", entry->d_name);
                    }
                    printf("\n");
                    continue;
                    
                } else 
                {
                    while ((entry = readdir(dir)) != NULL)
                    {
                        printf("%s\n ", entry->d_name);
                    }
                    printf("\n");
                    continue;
                }
                }
                closedir(src);
                closedir(dir);
            
            if (strcmp(input, "exit") == 0)
            {
                printf("Exiting...\n");
                return 1;
            }
        }
        

        
    } while (input != NULL);
    
    closedir(dir);
    return 0;
} 