#include <stdio.h>
int main(){
    int N,i,count;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(N<2){
        continue;
    }
    for(i=0;i<N;i++){
        count=0;
        if(N%i==0){
            count+=1;
        }
    }
    printf("%d",count);
}