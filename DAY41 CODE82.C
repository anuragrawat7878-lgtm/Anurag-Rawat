#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
