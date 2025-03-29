#include <stdio.h>
int main(){
    int N,k,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%N;
    for(i=N-k;i<N;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0;i<N-k;i++){
        printf("%d\n",arr[i]);
    }
}