#include <stdio.h>
int main(){
    int R,i,j,C;
    scanf("%d",&R);
    C=R+(R-1);
    for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            if(j==R){
                printf("* ");
            }
            else if(i-1<=j<=i+1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}