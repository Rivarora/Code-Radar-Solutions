#include <stdio.h>

int main(){
    int x,num,new_num;
    scanf("%d %d",&x,&num);
    new_num=num & ~ (1<<x);
    printf("%d",new_num);
    return 0;
}