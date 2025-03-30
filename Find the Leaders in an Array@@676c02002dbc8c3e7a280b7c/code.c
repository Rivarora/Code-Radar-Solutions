#include <stdio.h>

int main() {
    int N, i, count = 0;
    scanf("%d", &N);
    
    int arr[N], leaders[N];  // Array to store leaders
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[N - 1];  // Rightmost element is always a leader
    leaders[count++] = maxRight;

    // Traverse from right to left
    for (i = N - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders[count++] = maxRight;
        }
    }

    // Print leaders in decreasing order
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}

