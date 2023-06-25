#include<stdio.h>

// basic syntax of a funtion
// return_type function_name( parameters)
// {

// }

// THewer are 4 type of functions depending on return type and parameters----
//  1. Return +parameters both , [General funtions]
//  2. return + No Paramenters , [parameter void funtions]
//  3. No return + Perameters , [return void funtion]
//  4. No Return + No Parameters, [Full void funtion]

// funtion can be declaire above main() function, or below main() functions...
// But the standard is to declaire the funtion type, name and parameter above the main. 
// so the best practice is to write a funtion above tha main() funtions.

int sums(int a, int b)
{
    int sumss= a+b;
    return sumss;
    // this is a general funtions
}



int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s= sums(x,y); // you must store the return value to a variable when you call a return fuction.
    printf("%d", s);

    
    return 0;
}