#include <stdio.h>
int main(){
    int N,temp,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    int sorted=arr[j];
    int sorted=arr[N-2];
    printf("%d",sorted);
}