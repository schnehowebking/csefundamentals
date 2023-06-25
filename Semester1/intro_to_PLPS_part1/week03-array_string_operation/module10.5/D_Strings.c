#include <stdio.h>
#include <string.h>

int main() {
    char a[11], b[11], c[22];
    int size_a, size_b;

    scanf("%s\n%s", a, b);
    size_a = strlen(a);
    size_b = strlen(b);

    strcpy(c, a);
    strcat(c, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n%s\n%s %s\n", size_a, size_b,c ,a, b);
    return 0;
}
