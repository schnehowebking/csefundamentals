#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s\n%s", &a, &b);
    long long int lena = strlen(a);
    long long int lenb = strlen(b);

    printf("%lld %lld\n%s %s", lena, lenb, a, b);


    
    return 0;
}