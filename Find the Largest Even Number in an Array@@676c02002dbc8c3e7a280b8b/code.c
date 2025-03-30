#include <stdio.h>
int main(){
    int N,i,maxeven=-1;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>maxeven){
            maxeven=arr[i];
        }
    }
    printf("%d",maxeven);
    }