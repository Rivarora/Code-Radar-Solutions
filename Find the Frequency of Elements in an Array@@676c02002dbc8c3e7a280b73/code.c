#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        int count=1;
        if(arr[i]==arr[j]){
            count=0;
            break;
        }
    }
    if(count==0){
        continue;
    }
    for(j=i+1;i<N;j++){
        if(arr[i]==arr[j]){
            count++;

        }
    }
    printf("%d %d",arr[i],count);
}