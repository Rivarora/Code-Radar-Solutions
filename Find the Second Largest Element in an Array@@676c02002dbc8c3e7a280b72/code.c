#include <stdio.h>
#include <limits.h>  // For INT_MIN

int main() {
    int N, i;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the array elements (including negative values)
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    // Find the largest element
    for (i = 0; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest element
    for (i = 0; i < N; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element\n");
    } else {
        printf("Second Largest: %d\n", secondLargest);
    }

    return 0;
}
