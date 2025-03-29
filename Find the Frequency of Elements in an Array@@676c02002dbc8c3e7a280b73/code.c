#include <stdio.h>
int main(){
    int N,i,j,count=1;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        
        if(arr[i]==arr[j]){
            count=0;
            break;
        }
    
    if(count==0){
        continue;
    }
    for(j=i+1;j<N;j++){
        if(arr[i]==arr[j]){
            count++;

        }
    }
    printf("%d %d",arr[i],count);
}}