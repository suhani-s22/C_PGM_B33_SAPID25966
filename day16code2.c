// Program to check whether a number is a palindrome

#include <stdio.h>
// Includes the standard input-output library for printf() and scanf()

int main() {
// The main function — program execution starts here

    int num, original, reversed = 0, remainder;
    // 'num' stores the number entered by the user
    // 'original' keeps a copy of the number to compare later
    // 'reversed' will store the reversed number (initially 0)
    // 'remainder' will store the last digit of 'num' each time

    printf("Enter a number: ");
    // Asks the user to enter an integer

    scanf("%d", &num);
    // Reads and stores the number entered by the user in 'num'

    original = num;
    // Stores the original value of 'num' before we modify it

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;
        // Extracts the last digit of the number

        reversed = reversed * 10 + remainder;
        // Builds the reversed number by adding digits one by one

        num = num / 10;
        // Removes the last digit from 'num'
    }

    // After the loop, 'reversed' contains the reversed version of 'original'

    if (original == reversed) {
        // If the original number and reversed number are same
        printf("The number is a palindrome.\n");
    } else {
        // Otherwise, it's not a palindrome
        printf("The number is not a palindrome.\n");
    }

    return 0;
    // Ends the program successfully
}
