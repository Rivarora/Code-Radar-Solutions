#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(j=0;j<i;j++){
            printf("*");
        }
    }
}