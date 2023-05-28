#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);
    int arr[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
            
        }
    }
    int f = 1;
    

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    f = 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                f = 0;
            }
        }
    }
    if (f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}