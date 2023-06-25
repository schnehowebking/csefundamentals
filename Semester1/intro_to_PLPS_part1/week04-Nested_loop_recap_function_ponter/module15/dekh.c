#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            switch (tolower(str[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        }
    }
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
}