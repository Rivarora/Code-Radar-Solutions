#include <stdio.h>
#include <string.h>

// Function to find the first or last occurrence of target in array
int findOccurrence(int arr[], int size, int target, char occurrenceType[]) {
    int index = -1;

    if (strcmp(occurrenceType, "first") == 0) {
        // Finding first occurrence
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }
    } else if (strcmp(occurrenceType, "last") == 0) {
        // Finding last occurrence
        for (int i = size - 1; i >= 0; i--) {
            if (arr[i] == target) {
                index = i;
                break;
            }
        }
    } else {
        return -1;
    }

    return index;
}