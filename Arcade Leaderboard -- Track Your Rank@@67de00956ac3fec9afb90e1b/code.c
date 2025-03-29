#include <stdio.h>
int trackPlayerRanks(int ranked[],int n,int player[],int m,int result[]){
    int ranks[n],rank=1;
    ranks[0]=rank;
    for(int i=1;i<n;i++){
        if(ranked[i]==ranked[i-1]){
            ranks[i]=rank;
        }
        else{
            rank++;
            ranks[i]=rank;
        }
    }
    int i=n-1;
    for(int j=0;j<m;j++){
        while(i>=0 && player[j]>=ranked[i]){
            i--;
        }
        if(rank==-1){
            result[j]=1;
        }
        else{
            result[j]=ranks[i]+1;
        }
    }
}