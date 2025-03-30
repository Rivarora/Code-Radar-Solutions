#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int n = strlen(str);  // Get the length of the string
    char result[100];      // Array to store the compressed string
    int count = 1;         // Counter to count consecutive characters
    int index = 0;         // To track position in result array

    // Loop through the string
    for (int i = 0; i < n; i++) {
        // Check if next character is the same as current
        if (str[i] == str[i + 1]) {
            count++;  // Increment the count if characters are the same
        } else {
            result[index++] = str[i]; // Store the character in result
            result[index++] = count + '0'; // Store the count (as character)
            count = 1; // Reset count for next character
        }
    }

    result[index] = '\0'; // Null-terminate the string
    printf("%s", result); // Print the compressed string
}