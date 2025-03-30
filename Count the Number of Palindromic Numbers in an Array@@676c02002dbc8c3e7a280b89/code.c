#include <stdio.h>

int main() {
    int N, i, palindrome=0,count=0;
    scanf("%d", &N);
    
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]==arr[N-i-1]){
            palindrome=1;
            count++;
            break;
        }
        
    }
    if(palindrome){
        printf("%d",count);
    }
    }