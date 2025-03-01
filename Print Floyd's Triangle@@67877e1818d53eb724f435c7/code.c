#include <stdio.h>
int main(){
    int i,j,sp,N;
    char ch='A';
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
}