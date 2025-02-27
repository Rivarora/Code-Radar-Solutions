#include <stdio.h>
int main(){
    int R,i,j,C;
    scanf("%d",&R);
    C=R+(R-1);
    for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            if(j%2!=0){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}