#include<stdio.h>

int main()
{
    int x=100;
    int *ptr = &x;
    printf("%p\n", &x);
    printf("%p\n", ptr);
    //  so &x==ptr;
    printf("%p\n", &ptr);
    printf("Size= %d\n", sizeof(ptr));


    
    return 0;
}