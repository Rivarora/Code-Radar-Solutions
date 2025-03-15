int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find first out-of-order element from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If already sorted, return 0
    if (start == -1) return 0;

    // Find first out-of-order element from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Find the min and max within the unsorted subarray
    int min = arr[start], max = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Expand start to the left if necessary
    while (start > 0 && arr[start - 1] > min) start--;

    // Expand end to the right if necessary
    while (end < n - 1 && arr[end + 1] < max) end++;

    return end - start + 1;
}

    