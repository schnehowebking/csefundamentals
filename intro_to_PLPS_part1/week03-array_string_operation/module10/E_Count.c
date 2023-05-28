#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000001];
    scanf("%s", &a);
    // gets(a);
    int len =strlen(a);
    int sum= 0;
    int i = 0;
    while (i<len)
    {
       sum+=(a[i]-'0');
       i++;

    }
    
    printf("%d", sum);
    return 0;
}