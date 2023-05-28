#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        
        for(j=i; j<n; j++) {
            printf(" ");
        }
        for(k=1; k<=(2*i-1); k++) {
            if (i%2==0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
            
        }
        printf("\n");
    }

    return 0;
}