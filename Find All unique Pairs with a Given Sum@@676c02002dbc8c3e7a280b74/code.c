#include <stdio.h>
int main(){
    int N,i,check,j,num1,num2;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&check);
    for(i=0;i<N;j++){
        for(j=i+1;j<N;i++){
            if(arr[i]+arr[j]==check){
                if(arr[i]>arr[j]){
                     num1=arr[j];
                     num2=arr[i];
                }
                else{
                    num1=arr[i];
                    num2=arr[j];
                }
                printf("%d %d",num1.num2);
                return 0;
            }
        }
    }
}