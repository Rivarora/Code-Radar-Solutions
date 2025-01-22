#include <stdio.h>

void main(){
    int x,y,z;
    float average;
    scanf("%d %d %d",&x,&y,&z);
    average=(x+y+z/3);
    printf("Average: %f", average);
    return 0;
}