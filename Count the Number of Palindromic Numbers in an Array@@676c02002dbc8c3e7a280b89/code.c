#include <stdio.h>

int main() {
    int N, i, num, rev, temp, count = 0;
    scanf("%d", &N);
    
    int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        num = arr[i];
        rev = 0;
        temp = num;

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (num == rev) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
