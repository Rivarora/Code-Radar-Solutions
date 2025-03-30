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
        for (j = i + 1; j < N; j++) { 
            if (arr[i] + arr[j] == check) {
                if (found == 0 || (arr[i] != arr[i - 1] || arr[j] != arr[j - 1])) {
                    printf("%d %d\n", arr[i], arr[j]);
                    
                }
            }
        }
    }

    

    return 0;
}


