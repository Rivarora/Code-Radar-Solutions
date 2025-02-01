#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(num==0){
        printf("0");
    }
    else{
        while(num > 0){
            printf("%d",num & 1);
            num=num>>1;
        }
    }
    return 0;
}