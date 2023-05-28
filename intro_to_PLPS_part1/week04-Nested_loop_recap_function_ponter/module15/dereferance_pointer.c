#include<stdio.h>

int main()
{
    int x=100;
    int *ptr = &x;

    x=200;

    
    printf("X er value= %d\n", x);
    printf("Ptr = %d\n",*ptr);

    //  so x==*p ;


    
    return 0;
}