#include <stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    
    if(n & (1<<x)){
        printf("%d",n);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
