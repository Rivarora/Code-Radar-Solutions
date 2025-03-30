#include <stdio.h>

int main() {
    int N, i, j, maxFreq = 0, maxElem;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        int count = 0;
        for (j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq || (count == maxFreq && arr[i] < maxElem)) {
            maxFreq = count;
            maxElem = arr[i];
        }
    }

    printf("%d", maxElem);
    return 0;
}
