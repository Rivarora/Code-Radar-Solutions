#include <stdio.h>

int main() {
    int N, i, count = 0, k;
    scanf("%d %d", &N,&k);
    
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < N; i++) {
        if(arr[i] > k) {
            count++; // Increase count if element is greater than k
        }
    }

    printf("%d", count); // Print the final count

    return 0;
}
