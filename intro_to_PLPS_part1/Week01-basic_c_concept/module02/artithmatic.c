#include<stdio.h>

int main()
{
    int a = 20, b = 3;
    int sum=a+b;
    int mns=a-b;
    int mtpl=a*b;
    double dvd=a*1.0/b;
    int mod = a%b;
    printf("%d %d %d %0.2lf %d",sum, mns, mtpl, dvd, mod);
    return 0;
}