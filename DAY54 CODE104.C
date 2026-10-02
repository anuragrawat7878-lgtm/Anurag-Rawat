#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    long long totalSum;
    long long pivot;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%lld", &n);

    // Check valid input
    if (n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    // Calculate total sum
    totalSum = n * (n + 1) / 2;

    // Find possible pivot
    pivot = (long long)sqrt((double)totalSum);

    // Check if pivot exists
    if (pivot * pivot == totalSum)
    {
        printf("%lld\n", pivot);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
