// Program to check whether a number is a Strong Number

#include <stdio.h>
// Includes standard input-output functions

// Function to calculate factorial of a digit
int factorial(int x) {
    int fact = 1;
    // 'fact' will store factorial value
    
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
        // Multiply from 1 to x
    }
    return fact;
    // Return factorial of x
}

int main() {
// Program execution starts here

    int num, original, remainder, sum = 0;
    // 'num' stores the input number
    // 'original' stores the number before modifying
    // 'remainder' stores each digit
    // 'sum' stores sum of factorials of digits

    printf("Enter a number: ");
    // Asking the user to enter a number

    scanf("%d", &num);
    // Reading the input number

    original = num;
    // Save original number for comparison

    // Loop to extract digits one by one
    while (num != 0) {
        remainder = num % 10;
        // Extract last digit

        sum = sum + factorial(remainder);
        // Add factorial of digit to sum

        num = num / 10;
        // Remove last digit
    }

    // After the loop, sum contains total of all digit-factorials

    if (sum == original) {
        // If sum equals original number
        printf("%d is a Strong Number.\n", original);
    } else {
        printf("%d is Not a Strong Number.\n", original);
    }

    return 0;
    // Program ends here
}
