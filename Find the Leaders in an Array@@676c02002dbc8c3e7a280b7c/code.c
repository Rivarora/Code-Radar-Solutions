#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    if(N==1){
        printf("%d",N);
        break;
    }
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[i]>arr[i-1]){
         printf("%d",arr[i]);
         return 0;
    }
    if(arr[N-1]>arr[N-2]){
        printf("%d",arr[N-1]);
        return 0;
    }
    for(i=1;i<N;i++){
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
        printf("%d",arr[i]);
    }
    }
}