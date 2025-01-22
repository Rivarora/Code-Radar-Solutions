#include <stdio.h>

void main(){
    char name[20],hobby[20];
    int age;
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %s,\nAge:%d,\n%s Hobby:",name,age,hobby);
    return 0;

}