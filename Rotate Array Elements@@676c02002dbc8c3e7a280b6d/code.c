#include <stdio.h>

int main() {
    int n, k, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Print the rotated array
    printf("Rotated Array: ");
    for (i = n - k; i < n; i++) {   // Print last k elements first
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - k; i++) {   // Print the remaining elements
        printf("%d ", arr[i]);
    }

    return 0;
}
