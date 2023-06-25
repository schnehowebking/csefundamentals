#include<stdio.h>
#include<string.h>
//  way 1 ......................
int main()
{
    int n;
    scanf("%d", &n);
    char a[101];
    int count =0;

    for (int i = 1; i <=n; i++)
    {
        scanf("%s", &a);

        if (strlen(a)<=10)
        {
            printf("%s\n",a);
            count =0; 
           
        }
        else
        {
            for (int j = 0; j < strlen(a)-2; j++)
            {
                count++;
            }
            printf("%c%d%c\n",a[0], count, a[strlen(a)-1]);
            count=0; 
        } 
    }
    
    return 0;
}
// way two..............
// int main() {
//     int t, n;
//     char s[101];

//     scanf("%d", &t);

//     while (t--) {
//         scanf("%s", s);
//         n = strlen(s);

//         if (n <= 10) {
//             printf("%s\n", s);
//         }
//         else {
//             printf("%c%d%c\n", s[0], n-2, s[n-1]);
//         }
//     }

//     return 0;
// }
