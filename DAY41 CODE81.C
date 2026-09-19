#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    fgets(str, 100, stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);

    return 0;
}
