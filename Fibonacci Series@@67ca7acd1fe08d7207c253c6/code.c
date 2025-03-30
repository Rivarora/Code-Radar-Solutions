int fibonacciSeries(){
    int n,fibo;
    scanf("%d",&n);
    if(N<=0)
       return 0;
    else
       return fibo(n-1)+fibo(n-2);
}