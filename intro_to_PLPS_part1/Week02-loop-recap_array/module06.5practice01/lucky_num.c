#include<stdio.h>

int main()
{
    int n, mod, div;
    if (n>=10 && n<=99)
    {
        scanf("%d", &n);
        mod =n%10;
        div = n/10;
        if (mod%div==0 || div%mod==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }    
    }
    
    return 0;
}