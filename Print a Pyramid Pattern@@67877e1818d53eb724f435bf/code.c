#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=3+i;j<=5-i;j++){
            if(j==i){
                printf("*");
            }
            else if(i<=j<=i++){
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