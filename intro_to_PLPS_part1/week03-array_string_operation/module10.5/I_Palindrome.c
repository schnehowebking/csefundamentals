#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int len, i, j;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
