// Program to check if a number is prime or not

#include <stdio.h>  // Include standard input-output library

int main() {
    int num, i, count = 0;  // Declare variables: num for input, i for loop, count for checking divisibility

    printf("Enter a number: ");  // Ask user to enter a number
    scanf("%d", &num);  // Read and store the number

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        printf("%d is not a prime number.\n", num);
    }
    else {
        // Loop from 1 to the given number
        for (i = 1; i <= num; i++) {
            // Check if 'num' is divisible by 'i'
            if (num % i == 0) {
                count++;  // Increment count each time a divisor is found
            }
        }

        // If the number has exactly 2 divisors (1 and itself), it’s prime
        if (count == 2) {
            printf("%d is a Prime number.\n", num);
        }
        else {
            printf("%d is not a Prime number.\n", num);
        }
    }

    return 0;  // End of program
}
