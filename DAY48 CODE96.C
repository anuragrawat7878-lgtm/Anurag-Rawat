#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, start = 0, end;

    fgets(s, 100, stdin);

    for (i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            end = i - 1;

            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            start = i + 1;

            if (s[i] == '\n' || s[i] == '\0')
                break;
        }
    }

    printf("%s", s);

    return 0;
}
