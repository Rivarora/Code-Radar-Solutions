#include <stdio.h>
void main(){
    int i,j,sp,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    for(sp=1;sp<=N;sp++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    printf("*")}
}