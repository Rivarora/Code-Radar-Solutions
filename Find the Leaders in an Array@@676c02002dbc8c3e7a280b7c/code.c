#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[N - 1];  // Rightmost element is always a leader
    printf("%d ", maxRight);

    // Traverse from right to left
    for (i = N - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }

    return 0;
}
