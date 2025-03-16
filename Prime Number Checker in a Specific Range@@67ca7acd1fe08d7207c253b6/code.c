int isPrime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimeInRange(int a,b){
    for(i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d",i);
        }
    }
}