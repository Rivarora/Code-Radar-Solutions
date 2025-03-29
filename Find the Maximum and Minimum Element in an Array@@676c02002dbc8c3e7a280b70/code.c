#include <stdio.h>
#include <limits.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;

    for(i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i];
        }
        else if(arr[i]<arr[i+1]){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
}