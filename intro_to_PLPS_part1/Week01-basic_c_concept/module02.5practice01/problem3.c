#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        if(a%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }

    }
    else
    {
        printf("Please enter a non-negative value");
    }

    return 0;
}