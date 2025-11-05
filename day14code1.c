
// Program to find the sum of the first n odd numbers

#include <stdio.h>
// Includes standard input-output library (for printf and scanf)

int main() {
// Main function — program starts here

    int n, i, sum = 0;
    // 'n' will store how many odd numbers we want
    // 'i' will be used in the loop
    // 'sum' will store the total sum (initialized to 0)

    printf("Enter the value of n: ");
    // Asks the user to enter how many odd numbers to add

    scanf("%d", &n);
    // Reads the input value and stores it in variable 'n'

    printf("The first %d odd numbers are: ", n);
    // Prints message before listing odd numbers

    for (i = 1; i <= n; i++) {
    // Loop runs from 1 to n

        int odd = 2 * i - 1;
        // Formula to get the i-th odd number: 1, 3, 5, 7, ...
        // Example: if i=1 → 1, i=2 → 3, i=3 → 5, etc.

        printf("%d ", odd);
        // Prints each odd number

        sum = sum + odd;
        // Adds the current odd number to the total sum
    }

    printf("\nSum of the first %d odd numbers = %d\n", n, sum);
    // After loop ends, prints the total sum

    return 0;
    // Ends the program successfully
}

