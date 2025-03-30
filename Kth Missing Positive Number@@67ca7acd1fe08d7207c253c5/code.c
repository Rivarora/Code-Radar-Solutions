int findKthMissing(int arr[],int n,int k){
    int missing=0;
    int count=0,i=0;
    while(missing<k){
        if(i<n && arr[i]==count){
            i++;
        }
        else{
            missing++;
        }
        count++;
    }
    return count-1;}