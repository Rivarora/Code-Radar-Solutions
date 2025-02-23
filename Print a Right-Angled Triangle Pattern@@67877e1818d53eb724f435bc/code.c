int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    for(i=0;i<=row;i++){
        for(j=0;j<=column;j++){
            if(j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}