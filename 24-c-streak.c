#include <stdio.h>
#include <stdlib.h>

void expansiveArray();

int main()
{

    expansiveArray();
    return 0;
}

void expansiveArray()
{
    int i, n = 0;
    int *arr = NULL;
    do {
        printf("Enter in the value you want to push: ");
        scanf("%d", &i);
        if (i == -1) break;
        int *temp = realloc(arr, (n+1) * sizeof(int));
        if (temp == NULL)
        {
            printf("Could not be allocated");
            return;
        }
        arr = temp;
        arr[n++] = i;
    } while (true);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    arr = NULL;
}