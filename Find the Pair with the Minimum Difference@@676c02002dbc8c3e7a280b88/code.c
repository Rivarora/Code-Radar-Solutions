#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, j, minDiff = INT_MAX;
    scanf("%d", &N);
    int arr[N], num1, num2;

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;

            if (diff < minDiff) {
                minDiff = diff;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("%d %d", num2, num1);
    return 0;
}
