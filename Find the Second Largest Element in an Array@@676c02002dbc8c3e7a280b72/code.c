#include <stdio.h>

int main() {
    int n, i, first, second;

    scanf("%d", &n);
    int arr[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -1000000;  // Use a very small number

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1000000) {
        printf("-1");
    } else {
        printf("%d", second);
    }

    return 0;
}