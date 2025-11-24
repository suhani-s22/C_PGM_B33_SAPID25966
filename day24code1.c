// Program to print a right-angled triangle pattern of stars

#include <stdio.h>
int main() {
    int i, j;

    // Outer loop controls the number of lines (5 lines)
    for(i = 1; i <= 5; i++) {

        // Inner loop prints stars in each line
        for(j = 1; j <= i; j++) {
            printf("*");  // Print star
        }

        printf("\n"); // Move to next line after printing stars
    }

    return 0;
}
