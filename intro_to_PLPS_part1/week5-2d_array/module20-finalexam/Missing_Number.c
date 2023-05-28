#include <stdio.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int miss = a-(b+c+d);
        printf("%d\n", miss);
    }

    return 0;
}