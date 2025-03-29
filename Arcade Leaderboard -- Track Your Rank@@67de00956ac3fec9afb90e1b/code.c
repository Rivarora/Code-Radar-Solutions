#include <stdio.h>

// Function to find the player's rank
int trackPlayerRanks(int ranked[], int n, int player) {
    int rank = 1;
    
    for (int i = 0; i < n; i++) {
        if (player < ranked[i]) {
            rank++;
        }
    }
    return rank;
}