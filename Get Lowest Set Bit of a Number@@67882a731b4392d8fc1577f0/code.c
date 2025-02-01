#include <stdio.h>
int main(){
int x,result;
scanf("%d",&x);
result = 1;
if (x==0){
    printf("0");
    return 0;
}
while((x & 1)==0){
    x=x>>1;
    result=result<<1;
}
printf("%d",result);
return 0;
}
