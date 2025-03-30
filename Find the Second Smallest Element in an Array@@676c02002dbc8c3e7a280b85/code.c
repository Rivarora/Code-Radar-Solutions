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

    // Find the second smallest element
    int found = 0;  // Flag to check if second smallest element is found
    for(i = 1; i < N; i++) {
        if(arr[i] != arr[0]) {
            printf("%d", arr[i]);
            found = 1;
            break;
        }
    }

    // If no second smallest element is found (all elements are the same)
    if (!found) {
        printf("-1");
    }

    return 0;
}


