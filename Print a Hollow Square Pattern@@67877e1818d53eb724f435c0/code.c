#include <Stdio.h>
void main(){
    int i,j,N;
    scanf("%d",&N);
    mid_value=(N/2)+1;
    for(i=1;i<=N;;i++){
        for(j=1;j<=N;j++){
            if(mid_value%j==0){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}