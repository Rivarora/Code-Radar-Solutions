#include <stdio.h>

int main(){
    int a,add,sub,mul,div;
    char c;
    scanf("%d%d%c",&a,&b,&c);
        if(c=='+'){
           add=a+b;
           printf("%d",add);}
        else if(c=='-'){
            sub=a-b;
            printf("%d",sub);
        }
        else if(c=='*'){
            mul=a*b;
            printf("%d",mul); }
        else if(c=='/'){
            div=a/b;
            printf("%d",div);
        }
        else{
            printf("error");
        }
         return 0;
}