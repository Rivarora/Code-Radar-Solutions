int findKthMissing(int arr[],int n,int k){
    int missingCount = 0;
    int current = 1;
    int i = 0;

    while (missingCount < k) {
        if (i < N && arr[i] == current) {
            // If the current number is in the array, move to the next number
            i++;
        } else {
            // If the current number is missing, count it
            missingCount++;
        }
        current++;
    }

    return current - 1;
}