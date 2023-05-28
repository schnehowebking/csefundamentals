#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, uppercase = 0, lowercase = 0, spaces = 0;
     fgets(str, sizeof(str), stdin);

    len = strlen(str);
    for(i=0; i<len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        }
        else if(str[i] == ' ') {
            spaces++;
        }
    }

    // printing the output
    printf("Capital - %d\n", uppercase);
    printf("Small - %d\n", lowercase);
    printf("Spaces - %d\n", spaces);

    return 0;
}
