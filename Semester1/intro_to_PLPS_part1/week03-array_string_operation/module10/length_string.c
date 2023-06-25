#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s", &a);

    // // for string.h
    int st =strlen(a);
    printf("%d\n", st);

    // // for simple logic;

    int count =0;
    // // for loop
    for (int i = 0; a[i]!='\0'; i++)
    {
       count++;
    }
    printf("%d\n",count);

    // // while loop
    int i=0;
    while (a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count);
    
    return 0;
}