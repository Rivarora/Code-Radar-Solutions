#include <stdio.h>
int main(){
    int N,temp,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    int sorted=arr[j];
    for(i=N;i>=0;i--){
        printf("%d",arr[i-2]);
    }
}