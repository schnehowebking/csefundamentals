#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    // gets(a);
    fgets(a,13,stdin);
    a[5]='\0';

    printf("%s", a);
    return 0;
}