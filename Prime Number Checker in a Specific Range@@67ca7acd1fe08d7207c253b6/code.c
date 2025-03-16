#include <stdio.h>

int isPrime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}


// Function to print prime numbers in a given range
void printPrimesInRange(int a, int b) {
    int found = 0; // Flag to check if at least one prime is found
    
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1; // Mark that at least one prime number is found
        }
    }
    
    if (!found) {
        printf("No prime numbers");
    }
    
    printf("\n");
}

    
    
