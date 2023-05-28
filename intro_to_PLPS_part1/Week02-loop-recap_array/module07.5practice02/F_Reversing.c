#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]); 
    }


    for (int i=n; i>0; i--)
    {
        printf("%d ", arr[i]); 
    }
    
    
    return 0;
}