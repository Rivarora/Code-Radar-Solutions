#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int n = strlen(str); // length of the string
    int j = 0; // index for the compressed string

    for (int i = 0; i < n; i++) {
        // Append the current character to the compressed string
        compressed[j++] = str[i];

        // Count the number of occurrences of the current character
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++; // Skip duplicate characters
        }

        // Append the count to the compressed string if greater than 1
        if (count > 1) {
            compressed[j++] = count + '0'; // Convert the count to a character
        }
    }
    compressed[j] = '\0'; // Add null-terminator at the end
}