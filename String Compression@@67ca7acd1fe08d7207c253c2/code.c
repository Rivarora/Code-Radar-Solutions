#include <stdio.h>
#include <string.h>

void compressString(char* str, char* compressed) {
    int n = strlen(str);
    int index = 0;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[index++] = str[i - 1];
            compressed[index++] = count + '0'; // Convert count to character
            count = 1;
        }
    }
    // Append the last character and its count
    compressed[index++] = str[n - 1];
    compressed[index++] = count + '0';
    compressed[index] = '\0'; // Null-terminate the compressed string
}