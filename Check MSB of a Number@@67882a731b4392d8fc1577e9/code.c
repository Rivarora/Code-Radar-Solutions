#include <stdio.h>

int main(){
    int x,size;
    scanf("%d",&x);
    size=sizeof(x);
    if(x>>31){
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}