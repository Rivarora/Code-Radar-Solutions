#include <stdio.h>

int main() {
    int N, i, max1 = -1000000, max2 = -1000000, min1 = 1000000, min2 = 1000000;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    printf("%d", (product1 > product2) ? product1 : product2);
    return 0;
}
