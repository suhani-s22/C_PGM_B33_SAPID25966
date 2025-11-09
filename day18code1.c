// Program to find and print all factors of a given number
#include <stdio.h>  // Include standard input-output library

int main() {
    int num, i;  // Declare two integer variables: one for the number and one for the loop counter

    printf("Enter a number: ");  // Ask user to enter a number
    scanf("%d", &num);  // Read and store the number in variable 'num'

    printf("Factors of %d are: ", num);  // Print message before listing factors

    // Loop from 1 to the number
    for (i = 1; i <= num; i++) {
        // If 'i' divides 'num' exactly (no remainder), then 'i' is a factor
        if (num % i == 0) {
            printf("%d ", i);  // Print the factor
        }
    }

    return 0;  // End of program
}
