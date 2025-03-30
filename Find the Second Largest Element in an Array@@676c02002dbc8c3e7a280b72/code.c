#include <stdio.h>

int main() {
    int n, i, first, second;

    
    scanf("%d", &n);

    if (n < 2) {
        printf("-1");
        return 0;
    }

    int arr[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("-1");
    } else {
        printf("%d", second);
    }

    return 0;
}
