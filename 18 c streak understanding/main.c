#include <stdio.h>
#include "stack.h"

extern int user_score;

int main()
{
    printf("%d\n", user_score);

    printf("%d\n", is_full());
    return 0;
}