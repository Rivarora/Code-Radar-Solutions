#include <stdio.h>

int main() {
    int N, i;
    int increasing = 1, decreasing = 1;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];
    
    // Input the elements of the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is non-decreasing or non-increasing
    for (i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            increasing = 0;  // If we find a decrease, it's not increasing
        }
        if (arr[i] > arr[i - 1]) {
            decreasing = 0;  // If we find an increase, it's not decreasing
        }
    }

    // If either increasing or decreasing is true, it's a monotonic array
    if (increasing || decreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

