#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x==2){
        printf("Prime");
    }
    else if(x<1){
        printf("Not Prime");
    }
    else if(x==1){
        printf("Neither Prime nor composite");
    }
    else if(x>1 && x/1==0 && x/x==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}