#include<stdio.h>

int main()
{
    char a[7];
    for (int i =0; i <7; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i <7; i++)
    {
        printf("%c" ,a[i]);
    }


    
    return 0;

    // 'a'=97
    // 'A'=65
    // sizeof();- display the size
}