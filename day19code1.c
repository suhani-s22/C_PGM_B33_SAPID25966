// Program to find the LCM of two numbers

#include <stdio.h>  // Include standard input-output library

int main() {
    int num1, num2, max;  // Declare variables for two numbers and a maximum value

    printf("Enter two numbers: ");  // Ask user for input
    scanf("%d %d", &num1, &num2);  // Read both numbers

    // The LCM of two numbers is always greater than or equal to the largest of the two
    max = (num1 > num2) ? num1 : num2;  // Use conditional operator to find the larger number

    // Infinite loop to find the first common multiple
    while (1) {
        // If max is divisible by both numbers, it is the LCM
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is: %d\n", num1, num2, max);
            break;  // Exit the loop once LCM is found
        }
        max++;  // Increase max and check again
    }

    return 0;  // End of program
}
