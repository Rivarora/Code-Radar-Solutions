#include <stdio.h>

// Function to find the player's rank
int findRank(int ranked[], int n, int score) {
    int rank = 1;
    
    for (int i = 0; i < n; i++) {
        if (score < ranked[i]) {
            rank++;
        }
    }
    return rank;
}