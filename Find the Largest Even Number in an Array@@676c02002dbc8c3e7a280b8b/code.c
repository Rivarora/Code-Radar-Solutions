#include <stdio.h>
#include <limits.h>
int main(){
    int N,i,maxeven=INT_MIN;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>maxeven){
            maxeven=arr[i];
        }
    }
    if(maxeven==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",maxeven);
    }
    }