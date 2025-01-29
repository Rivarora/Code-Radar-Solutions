#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x|y){
        printf("Ture");
    }
    else{
        printf("False");
    }
    return 0;
}