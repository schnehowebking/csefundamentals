#include <stdio.h>

int main()
{
    int n, i, tiger=0, pathan=0;
    long long int x1, x2;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%lld %lld", &x1, &x2);
        if(x1 > x2) {
            tiger++;
        }
        else if(x2 > x1) {
            pathan++;
        }
    }

    if(tiger > pathan) {
        printf("Tiger\n");
    }
    else if(pathan > tiger) {
        printf("Pathan\n");
    }
    else {
        printf("Draw\n");
    }

    return 0;
}
