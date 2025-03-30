#include <stdio.h>
int main(){
    int N,flag,i,j,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        flag=1
        if(arr[i]<1){
            flag=0;
        }
        for(j=2;i<arr[i];j++){
            if(arr[i]%j==0){
                flag=0;
            }
        }
    }
    if(flag){
        count++;
    }
    printf("%d",count);
}