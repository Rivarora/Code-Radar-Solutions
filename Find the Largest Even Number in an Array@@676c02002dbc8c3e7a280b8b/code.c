#include <stdio.h>
int main(){
    int N,i,even;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0){
            even=arr[i];
        }
    }
    printf("%d",even);
    }