#include <stdio.h>
int main(){
    int N,i,max,min,flag=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);}
    int max=arr[0],min=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
            flag=1;
        }
        if(arr[i]<min){
            min=arr[i];
            flag=1;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}