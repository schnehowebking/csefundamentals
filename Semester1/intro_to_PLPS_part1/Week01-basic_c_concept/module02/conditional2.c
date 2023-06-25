#include<stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("I'll eat burger");
    }
    else if(tk >= 50)
    {
        printf("I'll eat fuska");

    }
    else if(tk >= 20)
    {
        printf("I'll eat icecream");

    }
    else
    {
        printf("Not eat");
    }
    return 0;
}