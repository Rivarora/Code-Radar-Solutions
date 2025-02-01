#include <stdio.h>
int main(){
    int x,count;
    count=0;
    scanf("%d",&x);
    if(x==0){
        printf("32");
        return 0;
    }
    while((x & 1)==0){
        count++;
        x >>= 1;
        return 0;
    }
}