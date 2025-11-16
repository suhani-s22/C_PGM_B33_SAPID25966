// Program to swap the first and last digit of a number

#include <stdio.h>
// Includes standard input-output functions

int main() {
// Program starts here

    int num, original, lastDigit, firstDigit, temp, power = 1;
    // 'num' stores the user input
    // 'original' stores the number before changing it
    // 'lastDigit' = last digit of the number
    // 'firstDigit' = first digit of the number
    // 'temp' is used to remove last and first digits
    // 'power' helps rebuild the number later

    printf("Enter a number: ");
    // Ask user to enter a number

    scanf("%d", &num);
    // Read and store the input

    original = num; 
    // Store original value

    lastDigit = num % 10;
    // Extract the last digit of the number

    // Find the first digit
    while (num >= 10) {
        num = num / 10;
        // Keep dividing until only the first digit is left
    }
    firstDigit = num;
    // Saving the first digit

    // Remove first and last digit from original number
    temp = original;
    temp = temp / 10;     // Remove last digit
    temp = temp / 10;     // Still removing last? No — this removes only one digit.
    // Correction needed next:

    temp = original / 10;      // remove last digit
    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
        // Counting how many zeroes we need to place back later
    }

    // Now reconstruct the number:
    // newNumber = lastDigit * (10^(digits-1)) + middle part + firstDigit

    int middle = original % power;
    // Middle part (digits except first and last)

    int swapped = lastDigit * power + middle * 10 + firstDigit;
    // Build the swapped number

    printf("Number after swapping first and last digit = %d\n", swapped);
    // Print the final swapped number

    return 0;
    // End of program
}
