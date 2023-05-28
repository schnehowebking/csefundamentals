#include<stdio.h>
#include<string.h>

int main()
{
    char a[100001];
    // gets(a);
    fgets(a,100001,stdin);
    for (int i = 0; a[i]!='\\' ; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}