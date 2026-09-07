#include <stdio.h>

int main() {
    int n, a[100], positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);

    return 0;
}
