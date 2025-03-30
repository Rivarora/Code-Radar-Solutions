#include <stdio.h>

int main() {
    int N, i, j, check, found = 0;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &check);

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) { // j starts from i+1 to avoid duplicate pairs
            if (arr[i] + arr[j] == check) {
                printf("%d %d\n", arr[i], arr[j]);
                 // Mark that we found at least one pair
            }
        }
    }

    return 0;
}
