#include <stdio.h>
#include <ctype.h>
int main(){
    char x;
    scanf("%c",&x);
    if(isalpha()){
        if(x=="a"||x=="i"||x=="o"||x=="e"||x=="u"||x=="A"||x=="E"||x=="I"||x=="O"||x=="U"){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    else if(isdigit(){
        printf("Digit");
    })
    else{
        printf("Special Character");
    }
    }
    return 0;
}