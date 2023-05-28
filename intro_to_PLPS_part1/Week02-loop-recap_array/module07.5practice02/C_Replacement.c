#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>0)
        {
            arr[i]=1;
            printf("%d ", arr[i]);
 
        }
        else if (arr[i]==0)
        {
            arr[i]=arr[i];
            printf("%d ", arr[i]);
        }
        else
        {
            arr[i]=2;
            printf("%d ", arr[i]);
        }    
    }
    
    return 0;
}