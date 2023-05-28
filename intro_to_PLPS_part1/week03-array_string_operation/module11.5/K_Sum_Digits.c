#include <stdio.h>

int main() {
    int n, i, digit, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%1d", &digit); 
        sum += digit;
    }

    printf("%d\n", sum);

    return 0;
}
