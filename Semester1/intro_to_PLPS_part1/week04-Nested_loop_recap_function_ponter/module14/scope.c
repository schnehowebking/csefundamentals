#include<stdio.h>

// global variable
// functional variable(scope only in variable)
// loop variable(scope only on loop)
// 

int glb = 255l;
void fun(void)
{
    printf("%d\n",glb);
    int s= 100;
    printf("fun s Address - %p\n", &s);
}

int main()
{
    fun();
    int s = 1220;
    printf("main s Address - %p\n", &s);
    printf("%d\n",glb);


    for (int i = 0; i < 5; i++)
    {
        int x = 500;// this x will only print on entire loop but can't print without loop
        printf("for loop - %d\n", x);
    }

    
    
    return 0;
}