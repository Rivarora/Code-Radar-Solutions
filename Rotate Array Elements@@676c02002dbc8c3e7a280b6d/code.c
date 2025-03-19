#include <stdio.h>

int main() {
    int n, k, i;

    // Input the number of elements
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Print the rotated array
    for (i = n - k; i < n; i++) {   // Print last k elements first
        printf("%d \n", arr[i]);
    }
    for (i = 0; i < n - k; i++) {   // Print the remaining elements
        printf("%d \n", arr[i]);
    }

    return 0;
}
