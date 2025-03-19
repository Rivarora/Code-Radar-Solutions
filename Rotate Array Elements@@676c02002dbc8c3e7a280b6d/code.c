#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Rotate by k positions
    k = k % n;  // Handle cases where k > n

    for (i = 0; i < n; i++) {
        printf("%d ", arr[(i + k) % n]);
    }

    return 0;
}
