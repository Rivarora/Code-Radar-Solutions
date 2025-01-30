#include <stdio.h>
void main(){
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    {
        printf("Uppercase");
    }
    else {
        printf("Lowercse");
    }
    return 0;
}