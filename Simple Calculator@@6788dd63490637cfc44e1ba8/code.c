#include <stdio.h>

int main(){
    float a,b;
    float add,sub,mul,div;
    char c;
    scanf("%f%f%c",&a,&b,&c);
        if(c=='+'){
           add=a+b;
           printf("%f",add);}
        else if(c=='-'){
            sub=a-b;
            printf("%f",sub);
        }
        else if(c=='*'){
            mul=a*b;
            printf("%f",mul); }
        else if(c=='/'){
            div=a/b;
            printf("%f",div);
        }
        else{
            printf("error");
        }
         return 0;
}