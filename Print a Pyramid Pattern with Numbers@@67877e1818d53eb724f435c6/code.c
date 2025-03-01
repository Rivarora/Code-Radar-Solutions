#include <stdio.h>
int main(){
    int i,j,sp,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(sp=1;sp<=N-i;sp++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}