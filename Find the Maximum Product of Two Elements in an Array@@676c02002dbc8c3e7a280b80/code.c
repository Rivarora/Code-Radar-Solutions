#include <stdio.h>

int main() {
    int N, i, max1, max2;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = -1000000; // Assume very small numbers

    for (i = 0; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("%d", max1 * max2);
    return 0;
}


