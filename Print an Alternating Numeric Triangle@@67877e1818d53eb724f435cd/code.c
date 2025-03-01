#include <stdio.h>
int main(){
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("1");}
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
    }
