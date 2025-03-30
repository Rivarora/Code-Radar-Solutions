#include <stdio.h>
int main(){
    int N,i,check,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&check);
    for(i=0;i<N;j++){
        for(j=i+1;j<N;i++){
            if(arr[i]+arr[j]==check){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
}