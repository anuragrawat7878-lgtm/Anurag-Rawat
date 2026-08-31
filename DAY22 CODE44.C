#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 3, den = 4;

    scanf("%d", &n);

    if (n >= 1)
        sum = 1.0;

    for (i = 2; i <= n; i++) {
        sum = sum + (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
