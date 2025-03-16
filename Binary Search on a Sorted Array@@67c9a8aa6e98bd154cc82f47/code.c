#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (arr[mid] == target) {
            return mid; // Found the target, return index
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        }
        else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}
