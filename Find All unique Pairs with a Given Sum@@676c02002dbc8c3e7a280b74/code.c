#include <stdio.h>

int main() {
    char num[20]; 
    int i, j, found;

    scanf("%s", num); // Read number as a string

    for (i = 0; num[i] != '\0'; i++) {
        found = 0;

        // Check if num[i] appeared before
        for (j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%c", num[i]); // Print only unique digits
        }
    }

    return 0;
}

