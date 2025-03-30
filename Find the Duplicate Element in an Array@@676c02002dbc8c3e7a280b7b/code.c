#include <stdio.h>

int main() {
    int N, i,j,flag=1;
    scanf("%d", &N);
    
    int arr[N], leaders[N];  // Array to store leaders
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1;j++){
            if(arr[i]==arr[j] && i!=j){
                flag=0;
            }
        }
    }
    if(flag==0){
        printf("%d",arr[i]);
    }
    }