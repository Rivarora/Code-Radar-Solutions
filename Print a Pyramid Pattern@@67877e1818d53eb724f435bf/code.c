#include <stdio.h>
int main(){
    int N,i,j,C,sp;
    scanf("%d",&N);
    C=R+(N-1);
    for(i=1;i<=N;i++){
        for(sp=1;sp<=N-1;sp++){
            printf(" ");
        }
        for(j=1;j<=C;j++){
            if(j<=2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}