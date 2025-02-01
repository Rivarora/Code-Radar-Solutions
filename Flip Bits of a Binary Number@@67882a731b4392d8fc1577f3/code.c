#include <stdio.h>

int main(){
    int x,flipped;
    scanf("%d",&x);
    flipped=~x;
    printf("%d",flipped);
    return 0;
}