#include<stdio.h>

int main()
{
    char a[10];
    scanf("%s", &a);
    int sz = sizeof(a)/sizeof(char);
    printf("%d", sz);

    
    return 0;
}