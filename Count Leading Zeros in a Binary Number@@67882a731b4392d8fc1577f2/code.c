#include <stdio.h>

int main(){
    int x,count;
    count=0;
    scanf("%d",&x);
    if(x==0){
        printf("32");
        return 0;
    }
    while((x & (1<<31))==0){
        count++;
        x=x<<1;
    }
    printf("%d",count);
    return 0;
}