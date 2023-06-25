#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    if (t >= 1 && t <= 15)
    {
        for (int i = 1; i <= t; i++)
        {
            int n;
            int fact = 1;

            scanf("%d", &n);

            if (n >= 0 && n <= 20)
            {
                for (int j = 1; j <= n; j++)
                {
                    fact *= j;
                }

                printf("%d\n", fact);
            }
        }
    }

    return 0;
}