#include <stdio.h>

void main(){
    char name[20],hobby[20];
    int age;
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %c,\nAge:%d,\n%c Hobby:",name,age,hobby);
    return 0;

}