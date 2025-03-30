#include <stdio.h>
int main(){
    int N,maxfreq=0,ele,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<N;i++){
        int count=0;
        for(j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq||(count==maxfreq && arr[i]<ele)){
            maxfreq=count;
            ele=arr[i];
        }
    }
    printf("%d",ele);
}
