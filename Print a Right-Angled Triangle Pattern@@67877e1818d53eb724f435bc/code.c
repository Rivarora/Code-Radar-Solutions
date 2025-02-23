#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        for(j=0;j<=i;j++){
            if(j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}