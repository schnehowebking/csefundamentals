#include<stdio.h>

int main()
{
    int a, b, sums, subs, muls;
    float divs;
    scanf("%d %d", &a, &b);
    sums = a+b;
    subs = a-b;
    muls = a*b;
    divs = a*1.0/b;

    printf("%d + %d = %d\n", a, b, sums);
    printf("%d - %d = %d\n", a, b, subs);
    printf("%d * %d = %d\n", a, b, muls);
    printf("%d / %d = %0.2f\n", a, b, divs);


    return 0;
}