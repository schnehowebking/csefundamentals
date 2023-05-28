#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int sum = 0;
    
    for (long long int i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
        sum+=arr[i];
    }

    if (sum<0)
    {
        sum=sum*-1;
        printf("%lld ", sum);
    }
    else
    {
        printf("%lld ", sum);
    }
    

    return 0;
}