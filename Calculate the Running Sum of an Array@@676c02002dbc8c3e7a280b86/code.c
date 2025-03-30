#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        sum=arr[i]+arr[i+1];
    }
    for(i=0;i<N;i++){
        printf("%d ",sum);
    }
}