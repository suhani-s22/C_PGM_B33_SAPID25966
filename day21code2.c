// Program to check whether a number is a perfect number

#include <stdio.h>
// Includes standard input-output functions

int main() {
// Program execution begins here

    int num, sum = 0;
    // 'num' stores the user's input
    // 'sum' will store the sum of proper divisors of the number

    printf("Enter a number: ");
    // Asking the user to enter a number

    scanf("%d", &num);
    // Reading the number entered by the user

    // Loop to find divisors
    for (int i = 1; i < num; i++) {
        // Loop runs from 1 to num-1
        // Proper divisors of a number are always less than the number

        if (num % i == 0) {
            // If 'i' divides the number completely (no remainder)
            sum = sum + i;
            // Add the divisor to the sum
        }
    }

    // After loop, 'sum' contains the sum of all proper divisors

    if (sum == num) {
        // If sum of divisors equals the number
        printf("%d is a Perfect Number.\n", num);
    } else {
        // Otherwise
        printf("%d is Not a Perfect Number.\n", num);
    }

    return 0;
    // End of program
}
