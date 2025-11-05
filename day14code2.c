
// Program to find the product of even numbers from 1 to n

#include <stdio.h>
// Includes standard input-output library (for printf and scanf functions)

int main() {
// The main function — program execution starts here

    int n, i;
    long long product = 1;
    // 'n' will store the upper limit entered by the user
    // 'i' is the loop counter
    // 'product' stores the final product (long long used for large values)

    printf("Enter the value of n: ");
    // Asks the user to enter a number up to which we need even numbers

    scanf("%d", &n);
    // Reads the number entered by the user and stores it in 'n'

    printf("Even numbers from 1 to %d are: ", n);
    // Prints message before displaying even numbers

    for (i = 1; i <= n; i++) {
    // Loop runs from 1 to n

        if (i % 2 == 0) {
        // Checks if the number is even (divisible by 2)

            printf("%d ", i);
            // Prints the even number

            product = product * i;
            // Multiplies the even number with the current product
        }
    }

    printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
    // After loop ends, prints the final product
    // %lld is used for long long integers

    return 0;
    // Ends the program successfully
}
