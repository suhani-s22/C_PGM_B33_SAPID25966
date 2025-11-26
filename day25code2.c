// Program to print a right-aligned triangle of stars
//     *****
//      ****
//       ***
//        **
//         *
#include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop for 5 rows
    for(i = 5; i >= 1; i--) {

        // Print leading spaces before stars
        for(space = 5; space > i; space--) {
            printf(" ");  // print one space
        }

        // Print stars for the row
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
