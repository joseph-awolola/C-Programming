#include <stdio.h>
#define N 5

int *find_closest_flight(int *flight_1, int *flight_2);
void avg_and_sum(int a[], int n, double *avg, double *sum);
void swap(int *i, int *j);
void find_two_largest(int b, int a[b], int *large_1, int *large_2);

int main()
{
    // pointer logic

    int i = 1213, j = 1432;
    double avg = 0, sum = 0;
    int arr[] = {12, 4, 24, 34, 12};
    int a = 12, b = 113;
    avg_and_sum(arr, N, &avg, &sum);
    swap(&a, &b);

    printf("Value of a is %d and b is %d\n", a, b);
    printf("The sum is %.f and the average is %.f\n", sum, avg);

    printf("The closest flight for %d and %d is %d\n", i, j, *find_closest_flight(&i, &j));

    return 0;

}

int *find_closest_flight(int *flight_1, int *flight_2)
{
    if (*flight_1 > *flight_2)
    {
        return flight_2;
    } else return flight_1;
}

void avg_and_sum(int a[], int n, double *avg, double *sum)
{
    for (int i = 0; i < n; ++i)
    {
        *sum += a[i];
    }
    *avg = *sum / n;

}

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void find_two_largest(int b, int a[b], int *large_1, int *large_2)
{

}