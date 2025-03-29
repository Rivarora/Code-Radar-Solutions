#include <stdio.h>
int main(){
    int N,temp,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0],second_largest=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>largest){
            largest=array[i];
        }
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }

    }
    printf("%d",second_largest);
    
}