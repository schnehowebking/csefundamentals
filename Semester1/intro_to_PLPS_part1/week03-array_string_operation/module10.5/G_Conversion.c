#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];

    scanf("%s", s);

    for (int i = 0; s[i]; i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        }
    }

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 'a' - 'A';
        }
    }

    printf("%s\n", s);

    return 0;
}
