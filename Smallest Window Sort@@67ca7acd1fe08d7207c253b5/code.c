#include <stdio.h>

void findSmallestWindow(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the left boundary
    while (left < n - 1 && arr[left] <= arr[left + 1])
        left++;

    // If array is already sorted
    if (left == n - 1) {
        printf("Array is already sorted\n");
        return;
    }

    // Find the right boundary
    while (right > 0 && arr[right] >= arr[right - 1])
        right--;

    printf("Smallest window to sort: %d to %d\n", left, right);
}

