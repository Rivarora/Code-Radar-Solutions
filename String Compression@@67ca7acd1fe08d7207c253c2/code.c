#include <stdio.h>
#include <string.h>

void compressString(char* s) {
    int n = strlen(s);
    if (n == 0) return;

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            printf("%c%d", s[i - 1], count);
            count = 1;
        }
    }
    printf("%c%d", s[n - 1], count); // Print the last character count
}