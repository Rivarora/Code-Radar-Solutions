#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            break;
        }
        else if(arr[N]>arr[i-1] || arr[N]>arr[i+1]){
            printf("%d",arr[i]);
        }
    }
}