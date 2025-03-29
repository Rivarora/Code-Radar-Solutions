#include <stdio.h>

int main() {
    int n, i, flag = 1;

    // Input the number of elements
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            flag=0;
            breaak;
        }
    }
    if(flag==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}