#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even", num);
    } else {
        printf("%d is odd", num);
    }

    return 0;
}
