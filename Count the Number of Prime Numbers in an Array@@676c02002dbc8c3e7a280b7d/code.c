#include <stdio.h>

int main() {
    int N, i, j, count = 0;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);}
        for(i=0;i<N;i++){
        int isPrime = 1;
        
        if (arr[i] < 2){
            isPrime = 0;}  // Numbers < 2 are not prime
        
        for (i = 2; i < arr[i]; j++) { 
            if (arr[i] % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) count++; // Increase count if prime
    }

    printf("%d", count);
    return 0;
}
