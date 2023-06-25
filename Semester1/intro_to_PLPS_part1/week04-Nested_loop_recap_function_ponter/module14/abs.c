#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num = -10.50009;
    double abs_num = fabs(num);

    printf("The absolute value of %f is %f\n", num, abs_num);
    return 0;
}