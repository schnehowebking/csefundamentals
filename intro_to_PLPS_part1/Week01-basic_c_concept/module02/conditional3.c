#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000)
    {
        printf("CoxsBazar\n");
        if(tk >=10000)
        {
            printf("Centmartin\n");
        }
        else
        {
            printf("Back\n");
        }
    }
    
    else
    {
        printf("Not Go anywhere\n");
    }
    return 0;
}