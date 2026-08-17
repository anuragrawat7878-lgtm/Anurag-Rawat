#include <stdio.h>

int main() {
    char ch;

    // Input a character
    scanf("%c", &ch);

    // Check the character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Special character");
    }

    return 0;
}
