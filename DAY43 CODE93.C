#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int freq[256] = {0}, i;

    scanf("%s", s1);
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        freq[s1[i]]++;
        freq[s2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
