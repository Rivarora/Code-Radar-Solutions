#include <stdio.h>

#include <stdio.h>

void secondLargest(int arr[], int n) {
    if (n < 2) {
        printf("-1");
        return;
    }

    int first = arr[0], second = -1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1)
        printf("-1");
    else
        printf("%d", second);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    secondLargest(arr, n);
    return 0;
}
