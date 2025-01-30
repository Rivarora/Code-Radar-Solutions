#include <stdio.h>
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    printf("%d",x^(1<<n));
    return 0;
}