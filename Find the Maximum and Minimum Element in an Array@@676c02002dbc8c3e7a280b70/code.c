#include <stdio.h>
#include <limits.h>  // For INT_MIN and INT_MAX

int main() {
    int n, i;

    // Input the number of elements
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with extreme values
    int max = INT_MIN;
    int min = INT_MAX;

    // Find max and min
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];     // Update max if current element is larger
        }
        if (arr[i] < min) {
            min = arr[i];     // Update min if current element is smaller
        }
    }

    // Print the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
