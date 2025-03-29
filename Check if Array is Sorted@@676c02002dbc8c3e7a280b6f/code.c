#include <stdio.h>

int main() {
    int n, i, flag = 1; // Assume array is sorted initially

    // Input the number of elements
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in descending order
    for (i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {  // Found an increasing order → Not sorted
            flag = 0;
            break;  // Exit early
        }
    }

    // Output result
    if (flag == 0) {
        printf("Sorted");  // Descending order
    } else {
        printf("Not Sorted");  // Not in descending order
    }

    return 0;
}
