#include <stdio.h>

int main()
{
    int a, b, intrvl;
    scanf("%d %d", &a, &b);
    if (b > a && a>=0 && b>=0)
    {
        intrvl = b - a;

        if (intrvl>=1)
        {
            printf("YES\n");
            /* code */
        }
    }
    else if (intrvl==0 && a==b)
    {
        printf("YES\n");
    }
    

    else
    {
         printf("NO\n");
        
    }


    return 0;
}