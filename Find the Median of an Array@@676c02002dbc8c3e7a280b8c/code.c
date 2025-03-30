#include <stdio.h>
int main(){
    int N,i,median,j,temp;
    scanf("%d",&N);
    int arr[N];
    if(N==1){
        printf("%d",arr[N]);
        return 0;
    }
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
   for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    if(N%2==0){
        median=(arr[N/2]+arr[N/2-1])/2;
    }
    else{
        median=N/2+1;
    }
   }
 printf("%d",median);  
}