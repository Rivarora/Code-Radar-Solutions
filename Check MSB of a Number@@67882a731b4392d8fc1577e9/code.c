#include <stdio.h>

int main(){
    int x,size;
    scanf("%d",&x);
    if(x>>31){
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}