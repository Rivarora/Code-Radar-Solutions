#include <stdio.h>

int main() {
    int N, i, j, freq, majority = -1,flag=0;
    
    // Input array size
    scanf("%d", &N);
    
    int arr[N];

    // Input array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find majority element
    for (i = 0; i < N; i++) {
        freq = 0;
        for (j = 0; j < N; j++) {
            if (arr[j] == arr[i]) {
                freq++;
            }
        }
        if (freq > N / 2) {  
            majority = arr[i];
            flag=1
        }
    }
    if(flag==1){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }

    

    return 0;
}
