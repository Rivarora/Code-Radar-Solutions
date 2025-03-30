#include <stdio.h>
int main(){
    int N,i,count;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
scanf("%d",&k);
for(i=0;i<N;i++){
    int count=0;
    if(arr[i]>k){
        count++;
    }
}
printf("%d",count);
}