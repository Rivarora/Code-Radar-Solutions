#include <stdio.h>

// Function to sort the array (Selection Sort)
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to find the K-th smallest element
int kthSmallest(int arr[], int n, int k) {
    if (k <= 0 || k > n) {
        return -1; // If k is out of range, return -1
    }

    selectionSort(arr, n); // Sort the array

    return arr[k - 1]; // Return the K-th smallest element
}


