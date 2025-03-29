#include <stdio.h>

int main() {
    int N, i;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the array elements (including negative values)
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Handle edge case of single element array
    if (N < 2) {
        printf("No second largest element\n");
        return 0;
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find the largest and second largest elements
    for (i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;    // Update second largest
            largest = arr[i];           // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest exists
    if (largest == secondLargest) {
        printf("-1");
    } else {
        printf("%d", secondLargest);
    }

    return 0;
}

