
#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(void)
{
    char input[8192];
    struct dirent *entry;

    while (1)
    {
        printf("> ");

        if (fgets(input, sizeof input, stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0';

        char *command = strtok(input, " ");
        char *path = strtok(NULL, " ");

        if (command == NULL)
            continue;

        if (strcmp(command, "exit") == 0)
        {
            printf("Exiting...\n");
            break;
        }
        else if (strcmp(command, "ls") == 0)
        {
            DIR *dir = opendir(path != NULL ? path : ".");

            if (dir == NULL)
            {
                perror("opendir");
                continue;
            }

            while ((entry = readdir(dir)) != NULL)
            {
                printf("%s\n", entry->d_name);
            }

            closedir(dir);
        }
        else
        {
            printf("Unknown command: %s\n", command);
        }
    }

    return 0;
}
