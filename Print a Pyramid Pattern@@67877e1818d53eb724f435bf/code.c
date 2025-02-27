#include <stdio.h>
int main(){
    int R,i,j,C;
    scanf("%d",&R);
    C=R+(R-1);
    for(i=1;i<=R;i++){
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