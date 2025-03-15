#include <stdio.h>

// Function to find the length of the shortest unsorted subarray
int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find the first element that is out of order from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If the array is already sorted, return 0
    if (start == -1) {
        return 0;
    }

    // Find the first element that is out of order from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the min and max within the unsorted subarray
    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expand the subarray to include any numbers that should be in the sorted part
    while (start > 0 && arr[start - 1] > minVal) {
        start--;
    }
    while (end < n - 1 && arr[end + 1] < maxVal) {
        end++;
    }

    return end - start + 1;
}
