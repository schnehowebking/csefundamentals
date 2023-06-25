#include <stdio.h>
#include <stdlib.h>

void Sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main() {
    int n;
    scanf("%d", &n);
    int ages[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    Sort(ages, n);

    if (n % 2 == 0) {
        printf("%d %d", ages[n/2 - 1], ages[n/2]);
    } else {
        printf("%d", ages[n/2]);
    }
    return 0;
}
