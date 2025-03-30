#include <stdio.h>
int main(){
    int N, num = 1, i;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) { // Infinite loop to find missing number
        int found = 0;
        for (i = 0; i < N; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }
        if (!found) { // If num is missing, print and exit
            printf("%d", num);
            return 0;
        }
        num++; // Increase num to check next positive integer
    }
}

