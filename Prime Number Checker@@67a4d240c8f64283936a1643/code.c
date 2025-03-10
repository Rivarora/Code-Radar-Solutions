int isPrime(){
    int num;
    if(num%2==0||num%3==0||num%5==0||num%7==0){
        printf("0");
    }
    else{
        printf("1");
    }
}




int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",isPrime(num));
        printf("%d\n",isPrime(num));
    }
    return 0;
}