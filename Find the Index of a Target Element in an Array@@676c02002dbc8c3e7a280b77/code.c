#include <stdio.h>
int main(){
    int N,key,flag=0,i,index;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        printf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<N;i++){
          if(arr[i]==key){
            index=i;
            flag=1;
          }
    }
    if(flag==1){
        printf("%d",index);
    }
    else{
        printf("-1");
    }
}