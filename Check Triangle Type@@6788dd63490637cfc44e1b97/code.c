#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z && z==x){
        printf("Equilateral");
    }
    else if(x==y && y==z || y==x && y==z || z==x && z==y){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}