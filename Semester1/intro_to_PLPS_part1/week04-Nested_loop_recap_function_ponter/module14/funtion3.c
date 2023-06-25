#include<stdio.h>

void sum(int a, int b)
{
   int ss = a+b;
   printf("%d", ss);
//    though it'll not return , so print here...


}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    
    return 0;
}