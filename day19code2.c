// Program to find the sum of digits of a number

#include <stdio.h>
// Includes the standard input-output library

int main() {
// The main function — program execution starts here

    int num, remainder, sum = 0;
    // 'num' will store the user's input
    // 'remainder' is used to store each extracted digit
    // 'sum' will store the total of all digits (initially 0)

    printf("Enter a number: ");
    // Asking the user to enter a number

    scanf("%d", &num);
    // Reads the number entered by the user

    // Loop to extract digits and add them
    while (num != 0) {
        remainder = num % 10;
        // Extract the last digit using modulus operator

        sum = sum + remainder;
        // Add the extracted digit to the running total

        num = num / 10;
        // Remove the last digit from the number
    }

    printf("Sum of digits = %d\n", sum);
    // Prints the final sum of all digits

    return 0;
    // Ends the program
}
