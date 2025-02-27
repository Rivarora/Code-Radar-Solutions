#include <stdio.h>
int main(){
    int i,j,N,p=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("p ");
        }
        printf("\n");
        p++;
    }
    return 0;
}