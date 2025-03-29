#include <stdio.h>

// Function to calculate player ranks using Dense Ranking
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[n], rank = 1;

    // Assign ranks to leaderboard scores
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = rank;  // Same score → same rank
        } else {
            rank++;
            ranks[i] = rank;  // Different score → next rank
        }
    }

    // Determine player ranks
    int i = n - 1;  // Start from lowest leaderboard score
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= ranked[i]) {
            i--;  // Move up the leaderboard
        }
        result[j] = (i == -1) ? 1 : ranks[i] + 1;
    }
}