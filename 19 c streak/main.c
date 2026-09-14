#include "math.h"
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // structs in c
    struct 
    {
        int id;
        char name[50];
        char gender;
        bool isSane;
    } part1 = { 12, "Joseph", 'M', true},
      part2 = { 12, "Joseph", 'M', true};

    printf("The gender of %s is %c", part1.name, part1.gender);
    

    return 0;
}