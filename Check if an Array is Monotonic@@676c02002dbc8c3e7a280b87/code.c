#include <stdio.h>

int main() {
    int N, i, max, min;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    if (N == 1) {  
        printf("YES");
        return 0;
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < N; i++) {  
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max: %d, Min: %d", max, min);

    return 0;
}
