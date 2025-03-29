int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i];
        }
        else if(arr[i]<arr[i+1]){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
}