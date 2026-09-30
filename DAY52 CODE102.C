#include <stdio.h>

int main()
{
    int n, x, i, ans = -1;

    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
