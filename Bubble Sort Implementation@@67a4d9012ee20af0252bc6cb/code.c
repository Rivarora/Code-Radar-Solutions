int bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(int arr[],int n){
    int i,temp,flag=0;
    for(i=0;i<n;i++){
        flag=1;}
        if(flag==1){
            printf("%d",temp);
        }
    
}