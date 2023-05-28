#include <stdio.h>
#include<limits.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i =1; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    int mn= INT_MAX, pos;
    for (i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            pos = i;
        }
    }
    printf("%d %d\n", mn, pos);

    return 0;
}