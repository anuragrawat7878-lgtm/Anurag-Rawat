#include <stdio.h>

int main()
{
    int num, first, last, digits = 0;
    int temp, power = 1, middle, result;

    scanf("%d", &num);

    if (num < 10)
    {
        printf("%d", num);
        return 0;
    }

    temp = num;
    last = temp % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
    }

    first = temp;

    for (int i = 0; i < digits; i++)
        power *= 10;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
