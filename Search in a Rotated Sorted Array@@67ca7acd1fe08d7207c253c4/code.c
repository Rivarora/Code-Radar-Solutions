int searchInRotatedArray(int arr[], int n, int k) {
    int missing = 0;
    int count = 1;  // We start checking from 1 as it's the smallest positive integer.
    int i = 0;
    
    while (missing < k) {
        // If arr[i] equals the current count, move to the next element in the array
        if (i < n && arr[i] == count) {
            i++;
        } else {
            // If the current count is missing, increase the missing count
            missing++;
        }
        
        // Move to the next number in the sequence
        count++;
    }

    if(count!=0){
    return count - 1;}
    else{
        printf("-1");
    }

}
