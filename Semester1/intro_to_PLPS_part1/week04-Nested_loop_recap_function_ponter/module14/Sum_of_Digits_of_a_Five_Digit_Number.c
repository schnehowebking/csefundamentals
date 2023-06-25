#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sums =0;
    do
    {
        sums+=n%10;
        n/=10;
        /* code */
    } while (n!=0);

    printf("%d", sums);
    
    return 0;
}
