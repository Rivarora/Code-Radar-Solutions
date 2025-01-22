#include <stdio.h>

void main(){
    char name[50],hobby[50];
    int age;
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;

}