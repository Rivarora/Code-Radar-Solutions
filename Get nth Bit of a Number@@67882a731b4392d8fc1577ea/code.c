#include <stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    if(n&(1<<(n-1))){
        printf("%d",n);
    }
    return 0;

}