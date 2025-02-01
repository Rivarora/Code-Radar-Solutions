#include <stdio.h>

int main(){
    int x,count;
    count=0;
    scanf("%d",&x);
    if(num==0){
        printf("32");
        return 0;
    }
    while((num & (1<<31))==0){
        count++;
        num=num<<1;
    }
    printf("%d",count);
    return 0;
}