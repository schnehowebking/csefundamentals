#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_num = INT_MAX, max_num = INT_MIN;
    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min_num) {
            min_num = arr[i];
            min_index = i;
        }
        if (arr[i] > max_num) {
            max_num = arr[i];
            max_index = i;
        }
    }
   
    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
