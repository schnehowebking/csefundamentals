#include<stdio.h>

int main()
{
    int n, mx,inpt;
    scanf("%d", &n);
    mx =0;
    for (int i=1; i <= n; i++)
    {
        scanf("%d", &inpt);
        if(inpt>mx)
        {
            mx=inpt;
        }
 
    }
 
    printf("%d\n", mx);
    
    return 0;
}