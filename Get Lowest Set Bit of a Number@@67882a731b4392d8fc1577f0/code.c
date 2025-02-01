#include <stdio.h>
int main(){
int x,result;
scanf("%d",&x);
result = 1;
while((x & 1)==0){
    x=x>>1;
    result=result*2;
}
printf("%d",result);
return 0;
}
