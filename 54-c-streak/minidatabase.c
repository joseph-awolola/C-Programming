#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct User {
    int id;
    char *name;
    char *course;
    char grade;
    char rank;
};

struct Database 
{
    char *name;
    struct User users[10];
    long tel_no;
} Database;

int main()
{

    int id = 0;
    char choice;
    struct User *user;
    while (true)
    {
        printf("Welcome to the best database in the whole wide, ... Mexico\n");
        printf("Enter in the function you want to perform\n"
        "A. Create User\n"
        "B. Edit User info\n"
        "C. Delete User\n");
    
        scanf("%c", &choice);
        switch (choice)
        {
        case 'A':
            user = malloc(sizeof(struct User));
            user->id = id;
            printf("What's your name: ");
            fgets(user->name, sizeof(user->name), stdin);

            printf("What course are you in ");

            fgets(user->course, sizeof(user->course), stdin);
        
            printf("Your name is %s\n Your course is %s\n", &user->id, &user->name);
            break;
        case 'B':
            char edit_choice;
            printf("What do you want to edit: \n" "A. Name\n" "B. Course\n"); 
            scanf("%c", &edit_choice);
            switch (edit_choice)
            {
            case 'A':
                printf("Enter in your new data: ");
                scanf("%s", user->name);
                break;
            case 'B':
                printf("Enter in your new data: ");
                scanf("%s", user->course);
                break;
            
            default:
                printf("Invalid statement\n");
                break;
            }
            break;
        case 'C':
            user = realloc(user, sizeof(struct User));
            printf("User has been deleted\n");
            break;
        
        default:
            break;
        }
    }



    return 0;
}