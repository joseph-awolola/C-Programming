#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // rock papre scissors in c
    while(1)
    {
        
        int hand;
        char s[10], s2[10];
        srand(time(NULL));

        int min=1, max=3;
        int rand_val = (rand() % (max-min+1)) + min;
        printf("Enter in your hand\n1. Rock\n2. Paper\n3. Scissors:  ");
        scanf("%d", &hand);

        switch (hand)
        {
        case 1:
            strcpy(s, "rock");         
            break;
        
        case 2:
            strcpy(s, "paper");
            break;
        case 3:
            strcpy(s, "scissors");
            break;
        default:
            break;
        }
        if (hand < 1 || hand > 3)
        {
            printf("Out of bounds\n");
        }
        
        switch (rand_val)
        {
            case 1:
                strcpy(s2, "rock");         
                break;
            
            case 2:
                strcpy(s2, "paper");
                break;4
            case 3:
                strcpy(s2, "scissors");
                break;
            default:
                break;
        }

        if (rand_val == hand) 
        {
            printf("Draw\n");
            continue;
        }

        if (hand > rand_val && (hand-rand_val) != abs(2))
        {
            printf("%s defeated %s", s, s2);
        } else  printf("%s defeated %s", s2, s);
    }
    
    return 0;
}