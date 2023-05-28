#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            ans = i;
            break;
        }
        else
        {
            ans = ans;
        }
    }
    printf("%d\n", ans);

    return 0;
}