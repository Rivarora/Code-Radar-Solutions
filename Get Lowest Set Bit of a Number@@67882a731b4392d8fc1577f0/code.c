#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
printf("%d",log2(x & -x)+1);
return 0;
}