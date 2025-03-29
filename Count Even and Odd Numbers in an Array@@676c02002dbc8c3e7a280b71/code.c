int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
    scanf("%d",&arr[i]);}
    int even=0,odd=0;
    for(i=0;i<N;i++){
        if(i%2==0){
            even+=1;     
       }
       else{
        odd+=1;
       }
    }
    printf("%d %d",odd,even);
}