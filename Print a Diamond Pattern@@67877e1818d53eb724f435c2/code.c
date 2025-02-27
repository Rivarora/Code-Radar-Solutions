#include <stdio.h>
int main(){
    int N,i,j,C,sp;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(sp=1;sp<=N-i;sp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
                printf("*");
            
                   }
        for(i=N-1;i>=1;i--){
        printf("*");
        printf("\n");
    
    
    }}