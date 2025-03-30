#include <stdio.h>

int main() {
    int N, i, j, temp;
    scanf("%d", &N);
    int arr[N];

    // Input the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in descending order
    for(i = 0; i < N-1; i++) {
        for(j = i + 1; j < N; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the largest element (which will be at the first index after sorting)
    printf("%d", arr[1]);

    return 0;
}
