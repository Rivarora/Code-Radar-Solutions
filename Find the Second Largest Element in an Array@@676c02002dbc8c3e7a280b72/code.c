#include <stdio.h>
int main(){
    int N,i,second,large;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    second=large=-1000000;
    for(i=0;i<N-1;i++){
        if(arr[i]>large){
            large=arr[i];
            second=large;
        }
        else if(arr[i]>second && arr[i]!=large){
            second=arr[i];
        }
    }
    if(second==-1000000){
        printf("-1");
    }
    else{
        printf("%d",second);
    }
}