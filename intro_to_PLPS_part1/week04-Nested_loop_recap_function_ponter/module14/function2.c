#include<stdio.h>

int sums(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a+b;
    return sum;

}

// Note: when you use void keyword on parameters, the funtion will be strictly follow it.
//  and it will not take any parameters, but if you empty the parameter area, 
//  it will ignore the parameter value when you entered. But some old compilier will show errors!


int main()
{
    int s = sums();
    printf("%d", s);
    
    return 0;
}