#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
result= x & ((~x)+1);
printf("%d",result);
return 0;
}
