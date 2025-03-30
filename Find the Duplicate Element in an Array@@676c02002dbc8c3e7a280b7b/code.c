#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < N-1; i++) {
        for (j = 1; j < N-1; j++) { // Start from i+1 to avoid self-comparison
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]); // Print duplicate
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
