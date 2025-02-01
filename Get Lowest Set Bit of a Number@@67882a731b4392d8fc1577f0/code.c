#include <stdio.h>
int main(){
int x,result;
scanf("%d",&x);
result = 1;
while((num & 1)==0){
    num=num>>1;
    result=result*2;
}
printf("%d",result);
return 0;
}
