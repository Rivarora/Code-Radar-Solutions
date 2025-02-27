#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(j==i){
                printf("*");
            }
            else if(i-1<=j<=i+1){
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