#include <stdio.h>

int main(){
    int x,y,z,S;
    scanf("%d %d %d",&x,&y,&z);
    S=(x+y+z)/2;
    if((S*(S-x)*(S-y)*(S-z))*0.5){
    printf("Valid");
}
else{
    printf("Invalid");
}
return 0;
}