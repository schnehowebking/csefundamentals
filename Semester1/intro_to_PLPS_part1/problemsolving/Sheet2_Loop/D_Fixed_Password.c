#include<stdio.h>

int main()
{
    int p;

    while (scanf("%d",&p)!= EOF)
    {
        if (p==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}