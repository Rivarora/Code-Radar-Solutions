#include <stdio.h>
int main(){
    int N,freq,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        freq=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
            freq+=1;
        }}
    }
    if(freq>N/2){
        printf("%d ",arr[i]);
    }
    else{
        printf("-1");
    }
}