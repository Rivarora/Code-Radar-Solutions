#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d"&arr[i]);
    }
    int second=-1000000;
    int large;
    for(i=0;i<N;i++){
        if(arr[i]>large){
            large=arr[i];
            small=large;
        }
        else if(arr[i]>small && arr[i]!=large){
            secong=arr[i];
        }
    }
    if(small==-1000000){
        printf("-1");
    }
    else{
        printf("%d",second);
    }
}