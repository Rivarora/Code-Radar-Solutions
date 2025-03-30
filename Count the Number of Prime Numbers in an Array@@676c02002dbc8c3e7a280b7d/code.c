#include <stdio.h>

int main() {
    int N, i, j, count = 0;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        int isPrime = 1;
        
        if (arr[i] < 2) isPrime = 0;  // Numbers < 2 are not prime
        
        for (j = 2; j < arr[i]; j++) { 
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) count++; // Increase count if prime
    }

    printf("%d", count);
    return 0;
}
