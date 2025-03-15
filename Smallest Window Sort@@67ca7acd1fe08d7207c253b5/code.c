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

int main() {
    int arr[] = {1, 3, 5, 4, 2, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSmallestWindow(arr, n);

    return 0;
}
