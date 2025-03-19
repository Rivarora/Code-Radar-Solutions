#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
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
