#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==0||i==N||j==0||j==N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}