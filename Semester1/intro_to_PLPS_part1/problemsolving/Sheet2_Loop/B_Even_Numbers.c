#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (long long int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%lld\n", i);
            }
        }
    }

    return 0;
}