#include <stdio.h>
int main(){
    int N,i,k,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<N;i++){
        if(arr[i]==k){
            count++;
        }
    }
    printf("%d",count);
}