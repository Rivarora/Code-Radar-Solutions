#include <stdio.h>

void sortArray(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N, i, count = 1, maxCount = 1;
    
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, N);  // Sort array

    for (i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1]) continue; // Skip duplicates
        if (arr[i] == arr[i - 1] + 1) {
            count++;
        } else {
            if (count > maxCount) maxCount = count;
            
        }
    }

 

    printf("%d", maxCount);
    return 0;
}
