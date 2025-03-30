#include <stdio.h>

int main() {
    int N, i, num = 1;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) { 
        int found = 0;
        for (i = 0; i < N; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d", num);
            return 0;
        }
        num++;
    }
}
