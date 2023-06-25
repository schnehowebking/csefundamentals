#include<stdio.h>

int main()
{
    int a,b, mods, i, sum;
    scanf("%d %d", &a, &b);

    mods = a%b;

    if(mods==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    
    
    return 0;
}