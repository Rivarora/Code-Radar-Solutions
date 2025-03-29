int trackPlayerRanks(int ranked,int player,int result,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ranked[i]>ranked[i+1]){
                result=player[i];
            }
        }
}
}