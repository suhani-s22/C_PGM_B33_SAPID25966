// Program to convert a number into its binary representation

#include <stdio.h>
// Includes the standard input-output library for printf() and scanf()

int main() {
// The main function — execution starts here

    int num;
    // 'num' will store the number entered by the user

    int binary[32];
    // Array to store binary digits (maximum 32 bits for an integer)

    int i = 0;
    // 'i' will keep track of the array index

    printf("Enter a number: ");
    // Prompts the user to enter an integer

    scanf("%d", &num);
    // Reads and stores the entered number in 'num'

    if (num == 0) {
        // Special case: binary of 0 is 0
        printf("Binary: 0\n");
        return 0; // End program early
    }

    // Loop to find binary digits
    while (num > 0) {
        binary[i] = num % 2;
        // Stores the remainder when num is divided by 2
        // Example: 5 % 2 = 1 → first binary digit

        num = num / 2;
        // Divides num by 2 to get the next bit
        // Example: 5 / 2 = 2 (integer division)

        i++;
        // Move to next position in the binary array
    }

    printf("Binary: ");
    // Prints the message before binary digits

    // Loop to print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
        // Prints each binary digit from last to first
    }

    printf("\n");
    // Prints a new line at the end for better output formatting

    return 0;
    // Ends the program successfully
}
