#include <stdio.h>

// Function to sort the array (Bubble Sort for simplicity)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the k-th smallest element
int findKthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);  // Sort the array
    return arr[k - 1];  // Return the k-th smallest element
}