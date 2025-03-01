#include <stdio.h>
void main(){
    int i,j,N,sp;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(sp=1;sp<=N-i;sp++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
    }
    
}