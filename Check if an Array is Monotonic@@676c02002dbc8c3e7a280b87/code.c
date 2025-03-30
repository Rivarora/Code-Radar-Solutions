#include <stdio.h>

int main() {
    int N, i;
    int increasing = 1, decreasing = 1;

    // Input the size of the array
    scanf("%d", &N);

    int arr[N];
    
    // Input the elements of the array
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]>arr[i-1]){
               decreasing=0;
        }
        else(arr[i]<arr[i-1]){
            increasing=0;
        }
    }
    if(increasing||decreasing){
        printf("YES");
    }
    else{
        printf("NO");
    }
}