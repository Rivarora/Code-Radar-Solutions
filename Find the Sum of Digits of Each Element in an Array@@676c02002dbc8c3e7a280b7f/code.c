#include <stdio.h>

int main() {
    int N, i, num, sum, digit;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        num = arr[i];
        sum = 0;

        if (num < 0) num = -num;  // Convert to positive for digit sum

        while (num != 0) {
            digit = num % 10;  // Extract last digit
            sum += digit;      // Add to sum
            num /= 10;         // Remove last digit
        }

        if (arr[i] < 0) sum = sum;  // Make sum negative if original number was negative

        printf("%d ", sum);
    }

    return 0;
}

