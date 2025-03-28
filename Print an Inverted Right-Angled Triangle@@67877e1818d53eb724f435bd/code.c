#include <stdio.h>
int main(){
    int N;
    for(int i=N;i>=1;i--){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}