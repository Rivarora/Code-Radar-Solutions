#include <stdio.h>

int main() {
    int N, i,j,temp,sorted;
    scanf("%d", &N);
    int arr[N];

    // Input the array elements
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[0]);
    }