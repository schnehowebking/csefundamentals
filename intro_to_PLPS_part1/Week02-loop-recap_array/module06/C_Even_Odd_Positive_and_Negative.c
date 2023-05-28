#include<stdio.h>

int main()
{
    int n, a, i, even=0, odd=0, positv=0, ngtv=0;
    scanf("%d", &n);
    for (i=1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(a>0)
        {
            positv++;
        }
        else if(a<0)
        {
            ngtv++;
        }
        


    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positv, ngtv);
    

    return 0;
}