#include <stdio.h>
int main(){
    int N,i,median,j;
    scanf("%d",&N);
    int arr[i];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
   for(i=0;i<N;i++){
    int(j=0;j<N;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    if(N%2==0){
        median=(arr[N/2+1]+arr[N/2-1])/2;
    }
    else{
        median=N/2+1;
    }
   }
 printf("%d",median);  
}