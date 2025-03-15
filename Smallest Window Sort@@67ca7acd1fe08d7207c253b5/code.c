#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;

    // Find first out-of-order element from the left
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }

    // If array is already sorted, return 0
    if (start == -1) {
        printf("0\n");
        return 0;
    }

    // Find first out-of-order element from the right
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    printf("%d\n", end - start + 1);
    return 0;
}

    