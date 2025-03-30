#include <stdio.h>
int main(){
    int N,key,i,index=-1;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<N;i++){
          if(arr[i]==key){
            index=i;
            break;
          }
    }
    printf("%d",index);
}