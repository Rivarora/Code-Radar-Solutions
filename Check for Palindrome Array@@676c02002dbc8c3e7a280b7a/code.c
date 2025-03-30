#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<N/2;i++){
        if(arr[i]!=arr[N-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}