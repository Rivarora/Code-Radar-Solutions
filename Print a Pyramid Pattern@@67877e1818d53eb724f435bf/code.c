#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        for(j=0;j<=i;j++){
            if(5-i<=j<=3+i){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}