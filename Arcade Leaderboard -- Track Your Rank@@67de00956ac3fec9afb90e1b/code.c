#include <stdio.h>

// Function to calculate ranks
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int rank = 1, i = 0;
    
    // Loop through player scores
    for (int j = 0; j < m; j++) {
        while (i < n && player[j] < ranked[i]) {
            if (i == 0 || ranked[i] != ranked[i - 1]) {
                rank++;  // Increase rank only for unique scores
            }
            i++;
        }
        result[j] = rank; // Store player's rank
    }
}