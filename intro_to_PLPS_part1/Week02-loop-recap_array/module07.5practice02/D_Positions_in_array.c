#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]<=10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
        else
        {
            continue;
        }
        
    }

    return 0;
}