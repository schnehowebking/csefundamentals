#include<stdio.h>

void fun(int *x)
{
    *x=100;
    printf("fun er x er adderss %p, value= %d\n", &x, *x);


}



int main()
{
    int x=50;
    printf("Call er age main x er address %p, value= %d\n", &x, x);
    fun(&x);
    printf("Call er por main x er address %p, value= %d\n", &x, x);
    


    // so fun er x and main er x er address differnt


    //  so call by referance means it'll pass only the address to new function.. but the fun function when receive the address it stored address to a new variable... ;



    
    return 0;
}