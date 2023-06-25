#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arrA[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }

    int m;
    scanf("%d", &m);
    int arrB[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]);
    }

    int ans[n+m];
    for (int i = 0; i < n; i++)
    {
        ans[i]=arrA[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i]= arrB[j];
        i++;
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", ans[i]);
    }
    
    
    
    
    
    

    
    return 0;
}