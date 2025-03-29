#include <stdio.h>

int main() {
    int N, i;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], secondLargest = arr[0];

    // Find the largest element
    for (i = 1; i < N; i++) {
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

    if (largest == secondLargest) {
        printf("-1");
    } else {
        printf("%d", secondLargest);
    }

    return 0;
}
