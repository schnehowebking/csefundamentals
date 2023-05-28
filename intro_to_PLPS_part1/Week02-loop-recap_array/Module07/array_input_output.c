#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];


    // array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // array output
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}