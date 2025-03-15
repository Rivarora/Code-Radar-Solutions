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

    

    // Expand start to the left if necessary
    while (start > 0 && arr[start - 1] > min) start--;

    // Expand end to the right if necessary
    while (end < n - 1 && arr[end + 1] < max) end++;

    return end - start + 1;
}

    