#include <stdio.h>

int main() {
    int N, i, j, count;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];

    // Input the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the frequency
    for (i = 0; i < N; i++) {
        count = 1;  // Initialize count for each element

        // Skip duplicates
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = 0;   // Already counted
                break;
            }
        }

        if (count == 0) {
            continue;  // Skip duplicate occurrences
        }

        // Count occurrences
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print the frequency
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
