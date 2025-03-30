#include <stdio.h>

int main() {
    int N, i, j = 0;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    for (i = 0; i < N; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;  // Move pointer for non-zero position
        }
    }

    // Print the modified array
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
