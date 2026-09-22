#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);

    return 0;
}
