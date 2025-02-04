#include <stdio.h>

int main(){
    float a,b;
    int add,sub,mul,div;
    char c;
    scanf("%f%f%c",&a,&b,&c);
        if(c='+'){
           add=a+b;
           printf("%d",add);
           
           }
        else if(c='-'){
            sub=a-b;
            printf("%d",sub);
        }
        else if(c='*'){
            mul=a*b;
            printf("%d",mul); }
        else if(c='/'){
            div=a/b;
            printf("%d",div);
        }
        else{
            printf("error");
        }
         return 0;
}