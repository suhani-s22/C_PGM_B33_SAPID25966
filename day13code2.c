
// Program to print numbers from 1 to n using a loop

#include <stdio.h>
// Includes the standard input-output header file
// Needed for printf() and scanf() functions

int main() {
// Main function — program starts here

    int n, i;
    // 'n' will store the limit entered by the user
    // 'i' will be used as a counter in the loop

    printf("Enter the value of n: ");
    // Asks the user to enter a number up to which numbers will be printed

    scanf("%d", &n);
    // Reads the number entered by the user and stores it in variable 'n'

    printf("Numbers from 1 to %d are:\n", n);
    // Prints a message before displaying the numbers

    for (i = 1; i <= n; i++) {
    // 'for' loop starts from i = 1
    // It runs as long as i is less than or equal to n
    // After each loop, i increases by 1

        printf("%d ", i);
        // Prints the current value of i followed by a space
    }

    return 0;
    // Ends the main function and returns 0 (successful execution)
}
