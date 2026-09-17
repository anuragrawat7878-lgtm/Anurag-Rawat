#include <stdio.h>

int main() {
    int r, c, a[10][10], i, j, flag = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        for(j = i + 1; j < r; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
