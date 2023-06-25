#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int c= ceil(4.5);
    int f =floor(4.5);
    int r = round(4.4);
    int s= sqrt(4);
    int p = pow(5, 2);
    int abss = abs(-5);
    printf("%d %d %d %d %d %d", c,f,r,s,p, abss);
    
    return 0;
}