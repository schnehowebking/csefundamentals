#include<stdio.h>
 
int main()
{
    int n, even=0, odd=0, positv=0, negtv=0;
    scanf("%d", &n);
    int a;
    for (int i=1; i <= n; i++)
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
            negtv++;
        }
        
 
 
    }
 
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positv, negtv);
    
 
    return 0;
}