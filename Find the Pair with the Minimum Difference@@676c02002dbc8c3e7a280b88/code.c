#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, j, minDiff = INT_MAX, num1, num2;
    scanf("%d", &N);
    
    if (N < 2) {  // If only one element, return -1
        printf("-1");
        return 0;
    }

    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;

            if (diff < minDiff || (diff == minDiff && arr[i] + arr[j] < num1 + num2)) {
                minDiff = diff;

                // Store the smaller value in num1 and larger in num2
                if (arr[i] < arr[j]) {
                    num1 = arr[i];
                    num2 = arr[j];
                } else {
                    num1 = arr[j];
                    num2 = arr[i];
                }
            }
        }
    }

    printf("%d %d", num1, num2);
    return 0;
}



