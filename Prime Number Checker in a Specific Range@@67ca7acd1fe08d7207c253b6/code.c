#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) 
        return 0; // Numbers less than 2 are not prime
    
    if (num == 2) 
        return 1; // 2 is the only even prime number

    if (num % 2 == 0) 
        return 0; // Exclude even numbers >2 (optimization)

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) 
            return 0; // If divisible by any number, not prime
    }
    return 1; // Prime number
}

// Function to print prime numbers in a given range
void printPrimesInRange(int start, int end) {
    int found = 0; // Flag to check if at least one prime is found

    printf("Prime numbers between %d and %d are: ", start, end);
    
    for (int i = start; i <= end; i++) {
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



    
    
