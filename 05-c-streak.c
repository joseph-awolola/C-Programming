#include <stdio.h>
#define ROW 5
#define COL 8


int test(int rows, int cols);

int main()
{
    // processing columns in a multidimensional array
    // THIS IS WHERE I'M STUCK PLS HELP ME FUTURE ME, AND DON'T FORGET, DON'T MOVE ON TO THE NEXT DAY FILE WITHOUT IT

    test(ROW, COL);


}

int test(int rows, int cols)
{
    int a[ROW][COL];
    int ind;
    printf("What column do you want to clear: ");
    scanf("%d", &ind);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) a[i][j] = 8;
        a[i][ind] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
    /*
    int arr[2][2] = 
    {{2, 3},
     {2, 3}}, n = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Values are %d\n", arr[i][j]);
        }
    }*/
}