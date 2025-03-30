#include <stdio.h>

int main() {
    int N, i, count = 0, k;
    scanf("%d", &N);
    
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k); // Read the value of k

    for(i = 0; i < N; i++) {
        if(arr[i] > k) {
            count++; // Increase count if element is greater than k
        }
    }

    printf("%d", count); // Print the final count

    return 0;
}
