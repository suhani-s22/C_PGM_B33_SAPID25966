// Program to print a diamond pattern using stars (*)
// The pattern will look like this:
//     *
//     ***
//     *****
//     *******
//     *********
//     *******
//     *****
//     ***
//     *
#include <stdio.h>

int main() {
    int i, j;

    // -------- Upper Pyramid (1,3,5,7,9 stars) --------
    for(i = 1; i <= 5; i++) {  
        // Each row i prints (2*i - 1) stars

        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }

        printf("\n"); // Move to next line
    }

    // -------- Lower Inverted Pyramid (7,5,3,1 stars) --------
    for(i = 4; i >= 1; i--) {  
        // Each row i prints (2*i - 1) stars

        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
