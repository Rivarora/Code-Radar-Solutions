int main(){
    int N,freq=0,visited=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int initial=arr[0];
    for(i=0;i<N;i++){
        if(initial==arr[i]){
            freq+=1;
        }
        else{
            initial++;
        }
    }

}