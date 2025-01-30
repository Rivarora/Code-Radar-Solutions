#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x>=A && x<=Z){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}