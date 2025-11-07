// Program to reverse a given number

#include <stdio.h>
// Includes the standard input-output library for printf() and scanf()

int main() {
// The main function — program starts here

    int num, reversed = 0, remainder;
    // 'num' will store the number entered by the user
    // 'reversed' will store the reversed number (initially 0)
    // 'remainder' will store the last digit of 'num' during each loop

    printf("Enter a number: ");
    // Asks the user to enter an integer number

    scanf("%d", &num);
    // Reads the entered number and stores it in 'num'

    while (num != 0) {
        // Loop runs until the number becomes 0

        remainder = num % 10;
        // Extracts the last digit of 'num' using modulus operator (%)
        // Example: if num = 123 → remainder = 3

        reversed = reversed * 10 + remainder;
        // Adds the extracted digit to the reversed number
        // Example: reversed = 0*10 + 3 → reversed = 3
        // Next step: if remainder = 2 → reversed = 3*10 + 2 = 32, and so on

        num = num / 10;
        // Removes the last digit from 'num'
        // Example: 123 / 10 = 12
    }

    printf("Reversed number = %d\n", reversed);
    // After the loop ends, prints the reversed number

    return 0;
    // Ends the program successfully
}
