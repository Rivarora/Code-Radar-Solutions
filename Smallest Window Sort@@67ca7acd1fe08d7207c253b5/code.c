#include <stdio.h>

int  findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Step 1: Find left boundary
    while (left < n - 1 && arr[left] <= arr[left + 1])
        left++;

    // If array is already sorted
    if (left == n - 1) {
        printf("Array is already sorted\n");
        return;
    }

    // Step 2: Find right boundary
    while (right > 0 && arr[right] >= arr[right - 1])
        right--;

    // Step 3: Find min & max in the unsorted subarray
    int min = arr[left], max = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Step 4: Expand left boundary
    while (left > 0 && arr[left - 1] > min)
        left--;

    // Step 5: Expand right boundary
    while (right < n - 1 && arr[right + 1] < max)
        right++;
        return arr[i];

}
