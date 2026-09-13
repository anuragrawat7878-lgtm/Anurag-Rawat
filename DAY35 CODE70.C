#include <stdio.h>

int main() {
    int n, a[100], k, temp[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);
    k = k % n;

    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];

    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
