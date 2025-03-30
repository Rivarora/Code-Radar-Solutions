#include <stdio.h>

int main() {
    int num, sum, i, j, d = 0;
    int digits[10];  // To store digits of the number

    scanf("%d %d", &num, &sum);

    // Extract digits into an array
    while (num > 0) {
        digits[d++] = num % 10;
        num /= 10;
    }

    // Check pairs for the given sum
    for (i = d - 1; i > 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            if (digits[i] + digits[j] == sum) {
                printf("%d%d", digits[i], digits[j]);
                return 0;
            }
        }
    }

    printf("-1");  // No valid pair found
    return 0;
}

