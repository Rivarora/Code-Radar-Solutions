#include <stdio.h>
int main(){
    int N,num=1,found=0,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        if(arr[i]==num){
            found=1;
            break;
        }
    }
    if(!found){
        printf("%d",num);
    }
    num++;
}
