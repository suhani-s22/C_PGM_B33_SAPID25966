// Program to find the product of odd digits of a number

#include <stdio.h>
// Includes standard input-output functions like printf() and scanf()

int main() {
// Program starts here

    int num, remainder;
    int product = 1;
    // 'num' stores the user's number
    // 'remainder' stores each extracted digit
    // 'product' stores the final product of odd digits (initialized to 1)

    printf("Enter a number: ");
    // Asking the user to enter a number

    scanf("%d", &num);
    // Reading the entered number

    // Loop to examine each digit
    while (num != 0) {
        remainder = num % 10;
        // Extracts the last digit of the number

        if (remainder % 2 != 0) {
            // Checks if the digit is odd
            product = product * remainder;
            // Multiply the digit with the product
        }

        num = num / 10;
        // Removes the last digit
    }

    printf("Product of odd digits = %d\n", product);
    // Display the final product of all odd digits

    return 0;
    // Ends the program
}
