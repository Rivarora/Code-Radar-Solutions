#include <stdio.h>

int main(){
    char v[100];
    int count;
    scanf("%s",&v);
    count=0;
    while(v=='a',v=='e',v=='i',v=='o',v=='u',v=='A',v=='E',v=='I',v=='O',v=='U'){
        count=count+1;
    }
    printf("%d",count);
    return 0;
}