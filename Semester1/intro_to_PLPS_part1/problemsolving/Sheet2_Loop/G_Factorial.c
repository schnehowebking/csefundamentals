#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mltpl=1;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d\n", &i);
        for (int j = 1; j<=i; j++)
        {
            // mltpl*=j;
            printf("%d\n", j);
            
        }
        // printf("%d\n", mltpl);
    }
    
    
    return 0;
}