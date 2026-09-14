#include <stdio.h>
#include <string.h>

typedef int Food;

struct creds {
    int vals[5];
    char name[50];
    char role[50];
};

typedef struct person {
    struct creds cred;
    char course[20];
} Person;



typedef struct part {
    int id;
    char name[50];
} Part;

void print_part(Part p);
Part build_parts(int id, char *name);

int main()
{
    Person person = { (struct creds) {{1, 2, 3, 4, 5}, "Joseph", "Lab assistant"}, "comp science"};
    printf("%d\n", person.cred.vals[2]);
    Part part1 = (Part){1, "Joseph"};
    Part part2 = {2, "Michael"};
    part2= part1;
    print_part(part1);
    printf("%s\n", part2.name);

    // compund literals
    (int []){1, 2, 3, 4};

    return 0;
}

void print_part(Part p)
{
    if (p.id < 12)
    {
        printf("No, its not higher than 12, its %d\n", p.id);
    }
}

// build parts function
Part build_parts(int id, char *name)
{
    Part x;
    x.id = id;
    strcpy(x.name, name);

    return x;
}