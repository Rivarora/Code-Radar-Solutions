#include <stdio.h>
int main(){
    int N,freq;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<i;j++){
            freq+=1;
        }
    }
    if(freq>N/2){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
}