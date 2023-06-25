#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c\n", &ch);
    char s[99];
    scanf("%[^\n]%*c\c", &s);
    char sen[100];
    scanf("%[^\n]%*c\n", &sen);
    printf("%c\n%s\n%s", ch,s, sen);     
    return 0;
}