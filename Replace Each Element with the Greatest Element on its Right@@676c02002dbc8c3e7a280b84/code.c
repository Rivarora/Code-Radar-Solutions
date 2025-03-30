#include <stdio.h>

int main() {
    int N, i, maxRight;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    maxRight = arr[N-1]; // Start with the last element as maxRight
    arr[N-1] = -1; // Replace last element with -1 as there are no elements to the right

    for (i = N-2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxRight; // Replace current element with maxRight
        if (temp > maxRight) {
            maxRight = temp; // Update maxRight if current element is greater
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]); // Print the modified array
    }

    return 0;
}
