#include <stdio.h>
int main(){
    int N,i,count;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        count=0;
        if(i%N==0){
            count+=1;
        }
    }
    printf("%d",count);
}