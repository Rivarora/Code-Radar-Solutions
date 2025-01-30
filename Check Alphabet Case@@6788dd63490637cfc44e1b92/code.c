#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    {
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}