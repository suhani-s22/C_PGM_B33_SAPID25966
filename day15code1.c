// Program to calculate the factorial of a number

#include <stdio.h>
// Includes the standard input-output library for printf() and scanf()

int main() {
// The main function — program execution starts here

    int n, i;
    // 'n' will store the number entered by the user
    // 'i' will be used as a counter in the loop

    long long fact = 1;
    // 'fact' will store the factorial value
    // long long is used because factorial values can be very large

    printf("Enter a number: ");
    // Asks the user to enter an integer number

    scanf("%d", &n);
    // Reads the number entered by the user and stores it in 'n'

    if (n < 0) {
        // Checks if the number is negative
        printf("Factorial of a negative number doesn't exist.\n");
        // Factorial is not defined for negative numbers
    } 
    else {
        // If the number is zero or positive, factorial can be calculated

        for (i = 1; i <= n; i++) {
            // Loop starts from 1 and runs up to n
            // Each time, 'i' increases by 1

            fact = fact * i;
            // Multiplies the current value of 'fact' by 'i'
            // Example: for n = 5 → 1*2*3*4*5 = 120
        }

        printf("Factorial of %d = %lld\n", n, fact);
        // Prints the final factorial result
        // %lld is used because 'fact' is of type long long
    }

    return 0;
    // Ends the program successfully
}
