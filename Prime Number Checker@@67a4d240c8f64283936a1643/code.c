int isPrime(int num) {
    if(num < 2) {
        return 0; // Numbers less than 2 are not prime
    }
    
    // Check if the number is divisible by any number other than 1 and itself
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // Prime number
}

