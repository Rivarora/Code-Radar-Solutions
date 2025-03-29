#include <stdio.h>
int main(){
    int N,temp;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("%d",arr[i+1]);

}