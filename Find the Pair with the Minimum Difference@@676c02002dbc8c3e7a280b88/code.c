#include <stdio.h>
#include <limits.h>
int main(){
    int N,i,j,minDiff=INT_MAX,num1,num2,diff;
    scanf("%d",&N);
    if(N==1){
        printf("-1");
        return 0;
    }
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            diff=arr[i]-arr[j];
        }
        if(diff<0){
            diff=-diff;
        }
        if(diff<minDiff || (diff==minDiff && arr[i]+arr[j]<num1+num2)){
            minDiff=diff;
        }
    }
    if(arr[i]>arr[j]){
         num1=arr[j];
         num2=arr[i];
    }
    else{
        num1=arr[i];
        num2=arr[j];
    }
    printf("%d %d",num1,num2);
}



