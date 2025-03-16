void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    
    while (message[i] != '\0') {
        char ch = message[i];

        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = 'a' + (ch - 'a' + shift) % 26;
        }
        // Check if the character is an uppercase letter
        else if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = 'A' + (ch - 'A' + shift) % 26;
        }
        // Keep other characters unchanged
        else {
            encrypted[i] = ch;
        }
        
        i++; // Move to the next character
    }

    encrypted[i] = '\0'; // End the string properly
}
