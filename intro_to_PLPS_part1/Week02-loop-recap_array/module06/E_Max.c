#include<stdio.h>

int main()
{
    int n, max, i,inpt;
    scanf("%d", &n);
    max =0;
    for (i=1; i <= n; i++)
    {
        scanf("%d", &inpt);
        if(inpt>max)
        {
            max=inpt;
        }

    }

    printf("%d\n", max);
    

    return 0;
}