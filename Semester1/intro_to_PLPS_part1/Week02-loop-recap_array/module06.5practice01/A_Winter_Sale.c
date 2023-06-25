#include<stdio.h>

int main()
{
    int disc, price;
    float op , prnp ;
    scanf("%d %d", &disc, &price);
    prnp =100-disc;
    op = (price*100)/prnp;
    printf("%0.2f", op);

    return 0;
}