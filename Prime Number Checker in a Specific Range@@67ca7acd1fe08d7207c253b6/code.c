int printfPrimesInRange(int a,b){
    for(i=a;i<=b;i++){
    if(i<2){
        return 0;
    }
    for(int j=2;j<=b;i++){
        if(j%i==0){
            return 0;
        }
    }}
    return 1;
}