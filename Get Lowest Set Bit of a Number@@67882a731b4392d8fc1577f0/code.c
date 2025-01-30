#include <stdio.h>
int main(){
int x,count,n;
count=0
scanf("%d %d",&x &n);
while((n&1)==0){
    n=n>>1;
    count++
    printf("%d",n);
}
return 0;
}