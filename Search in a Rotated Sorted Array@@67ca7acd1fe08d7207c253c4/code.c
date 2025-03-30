#include <stdio.h>

int searchInRotatedArray(int arr[], int N, int target) {
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the mid element is the target
        if (arr[mid] == target) {
            return mid;
        }

        // If the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Check if the target is in the left half
            if (arr[left] <= target && target < arr[mid]) {
                left = mid - 1;
            } else {
                right = mid + 1;
            }
        }
        // If the right half is sorted
        else {
            // Check if the target is in the right half
            if (arr[mid] < target && target <= arr[right]) {
                right = mid + 1;
            } else {
                left = mid - 1;
            }
        }
    }

    return -1;  // Target not found
}
