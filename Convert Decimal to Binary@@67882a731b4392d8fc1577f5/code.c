#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    else{
        int first =0;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&i;
            if(bit==1||first==1)
            printf("%d",bit)
            first=1;
        }
    }
    return 0;
}