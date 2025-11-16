// Program to find the 1's complement of a binary number

#include <stdio.h>
// Includes standard input-output functions

int main() {
// Program execution starts here

    char binary[50];
    // Declares a character array to store the binary number as a string

    printf("Enter a binary number: ");
    // Asking the user to enter a binary number (like 10101)

    scanf("%s", binary);
    // Reads the binary number as a string (since it contains multiple digits)

    // Loop through each character in the string
    for (int i = 0; binary[i] != '\0'; i++) {
        // The loop runs until it finds the null character '\0' (end of string)

        if (binary[i] == '0') {
            // If the bit is 0, change it to 1
            binary[i] = '1';
        } else if (binary[i] == '1') {
            // If the bit is 1, change it to 0
            binary[i] = '0';
        }
        // Note: We assume the input contains only 0s and 1s
    }

    printf("1's Complement = %s\n", binary);
    // Prints the modified string which is now the 1’s complement

    return 0;
    // Ends the program
}
