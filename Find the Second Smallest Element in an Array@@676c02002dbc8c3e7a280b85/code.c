#include <stdio.h>

int main() {
    int N, i, j, temp;
    scanf("%d", &N);
    int arr[N];

    // Input the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    for(i = 0; i < N-1; i++) {
        for(j = i + 1; j < N; j++) {
            if(arr[i] > arr[j]) {  // Sort in ascending order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // If there are at least two distinct elements, print the second smallest
    if (N > 1) {
        for(i = 1; i < N; i++) {
            if(arr[i] != arr[0]) {
                printf("%d", arr[i]);
                break;
            }
        }
    } else {
        printf("-1");
    }

    return 0;
}

