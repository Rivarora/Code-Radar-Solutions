#include <stdio.h>
void main(){
    int i,j,N;
    scanf("%d",&N);
    int mid_value=(N/2)+1;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(mid_value){
                continue;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}