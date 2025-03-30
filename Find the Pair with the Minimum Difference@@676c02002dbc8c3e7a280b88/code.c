#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, j, minDiff = INT_MAX, num1, num2;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;

            if (diff < minDiff) {
                minDiff = diff;
                num1 = arr[i] < arr[j] ? arr[i] : arr[j];
                num2 = arr[i] > arr[j] ? arr[i] : arr[j];
            }
        }
    }

    printf("%d %d", num1, num2);
    return 0;
}

