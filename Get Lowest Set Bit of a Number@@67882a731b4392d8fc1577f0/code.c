#include <stdio.h>
int main(){
int x,result;
scanf("%d",&x);
result = 0;
if (x==0){
    printf("-1");
    return 0;
}
while((x & 1)==0){
    x >>= 1;
    result++;
}
printf("%d",result);
return 0;
}
