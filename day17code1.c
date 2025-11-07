
// Program to check whether a number is an Armstrong number

#include <stdio.h>
// Includes the standard input-output library functions

int main() {
// Main function — execution begins here

    int num, original, remainder, result = 0;
    // 'num' stores the user input
    // 'original' keeps a copy of the original number
    // 'remainder' stores each digit of the number
    // 'result' will store the sum of cubes of digits

    printf("Enter a number: ");
    // Asks the user to enter a number

    scanf("%d", &num);
    // Reads and stores the number entered by the user in 'num'

    original = num;
    // Keep the original value safe for later comparison

    // Loop to extract each digit and find the cube sum
    while (num != 0) {
        remainder = num % 10;
        // Gets the last digit of 'num'

        result = result + (remainder * remainder * remainder);
        // Adds the cube of that digit to 'result'

        num = num / 10;
        // Removes the last digit from 'num'
    }

    // After the loop, 'result' contains the sum of cubes of digits

    if (result == original) {
        // If the cube-sum equals the original number
        printf("The number is an Armstrong number.\n");
    } else {
        // Otherwise, it’s not
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
    // Ends the program successfully
}
