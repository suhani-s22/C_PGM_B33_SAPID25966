// Program to find the HCF (GCD) of two numbers

#include <stdio.h>  // Include standard input-output library

int main() {
    int num1, num2, i, hcf;  // Declare variables

    printf("Enter two numbers: ");  // Ask user for two numbers
    scanf("%d %d", &num1, &num2);  // Read both numbers

    // Loop from 1 to the smaller of the two numbers
    for (i = 1; i <= num1 && i <= num2; i++) {
        // If i divides both numbers exactly, store it as HCF
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // Update hcf
        }
    }

    // After the loop, hcf will have the greatest common divisor
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;  // End of program
}
