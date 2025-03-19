#include <stdio.h>

int main() {
    int n, i, flag = 1;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for descending order
    for (i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {   // If any element is smaller than the next one
            flag = 0;                 // Not in descending order
            break;
        }
    }

    // Print the result
    if (flag)
        printf("The array is in descending order.\n");
    else
        printf("The array is NOT in descending order.\n");

    return 0;
}
