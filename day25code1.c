// Program to print the following pattern:
// 5
// 45
// 345  
// 2345
// 12345 
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the row number (1 to 5)
    for(i = 5; i >= 1; i--) {

        // Inner loop prints numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
