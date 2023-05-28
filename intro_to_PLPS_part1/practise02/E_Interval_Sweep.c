#include <stdio.h>

int main()
{
    int a, b, intrvl;
    scanf("%d %d", &a, &b);
    intrvl = b - a;
    if (b > a && a>0 && b>0 && intrvl==1)
    {
      
        printf("YES\n");

    }
    else if (intrvl==0)
    {
        printf("YES\n");
    }
    

    else
    {
         printf("NO\n");
        
    }


    return 0;
}