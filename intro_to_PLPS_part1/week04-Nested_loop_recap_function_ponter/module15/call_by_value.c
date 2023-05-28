#include<stdio.h>

void fun(int x)
{
    printf("Fun x er address %p, value= %d\n",  &x, x);
    x=200;
    printf("Fun x er new address %p, value= %d\n",  &x, x);


}



int main()
{
    int x=50;
    printf("main x er address %p, value= %d\n", &x, x);
    x=150;
    printf("main x er new address %p, value= %d\n", &x, x);

    fun(x);
    printf("Call er por main x er address %p, value= %d\n", &x, x);
    


    // so fun er x and main er x er address differnt


    //  so call by value means it'll pass only the value;



    
    return 0;
}