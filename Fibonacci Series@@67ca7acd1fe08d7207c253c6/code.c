int fibo(){
    int N;
    scanf("%d",&N);
    if(N<=0)
       return 0;
    else
       return fibo(N-1)+fibo(N-2);
}