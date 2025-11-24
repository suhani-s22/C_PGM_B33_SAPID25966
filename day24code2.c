// Program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the number of rows (5 rows)
    for(i = 1; i <= 5; i++) {

        // Inner loop prints numbers from 1 to i
        for(j = 1; j <= i; j++) {
            printf("%d", j);  // Print numbers in same line
        }

        printf("\n");  // Move to next line after finishing each row
    }

    return 0;
}
