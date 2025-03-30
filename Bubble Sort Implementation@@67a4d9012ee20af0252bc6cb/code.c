int bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<N;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        return temp;
    }
}