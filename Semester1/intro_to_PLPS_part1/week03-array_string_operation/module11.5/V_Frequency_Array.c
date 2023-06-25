#include <stdio.h>


int main() {
    int n, m;
    int A[100000];
    int freq[100000 + 1] = {0};
    
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        freq[A[i]]++;
    }

    
    for (int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}
