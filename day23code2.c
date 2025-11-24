// Program to print a 5x5 grid of stars using nested loops
#include <stdio.h>

int main() {

    int i, j;   // loop variables

    // Outer loop → controls the number of rows
    for (i = 1; i <= 5; i++) {

        // Inner loop → prints 5 stars in each row
        for (j = 1; j <= 5; j++) {
            printf("*");
        }

        printf("\n");   // Move to next line after printing a row
    }

    return 0;
}
