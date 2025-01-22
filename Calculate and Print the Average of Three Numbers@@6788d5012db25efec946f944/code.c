#include <stdio.h>

void main(){
    float x,y,z;
    float average;
    scanf("%f %f %f",&x,&y,&z);
    average=(x+y+z)/3;
    printf("Average: %.2f", average);
    return 0;
}