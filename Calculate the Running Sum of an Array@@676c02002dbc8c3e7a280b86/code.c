#include <stdio.h>

int main() {
    int N, i, sum = 0;
    scanf("%d", &N);
    int arr[N];

    // Input the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and print the running sum
    for(i = 0; i < N; i++) {
        sum += arr[i];  // Add current element to the running sum
        printf("%d ", sum);  // Print the running sum
    }

    return 0;
}
