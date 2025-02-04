#include <stdio.h>

int main(){
    int a,b;
    int add,sub,mul,div;
    char c;
    scanf("%d %d%c",&a,&b,&c);
        if(c == '+'){
           printf("%d",a+b);
           }
        else if(c=='-'){
            sub=a-b;
            printf("%d",sub);
        }
        else if(c=='*'){
            mul=a*b;
            printf("%d",mul); }
        else if(c=='/'){
            if(b == 0){
                printf("error");
            }
            else{
            div=a/b;
            printf("%d",div);
        }}
        else{
            printf("error");
        }
         return 0;
}