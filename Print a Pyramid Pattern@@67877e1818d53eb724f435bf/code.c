#include <stdio.h>
int main(){
    int R,i,j,C;
    scanf("%d",&R);
    C=R+(R-1);
    for(i=R;i<=R;i++){
        for(j=C;j<=C;j++){
            if(j==i){
                printf("* ");
            }
            else if(i--<=j<=i++){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }}