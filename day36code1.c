//Read and print a matrix.
#include <stdio.h>   // Required for printf() and scanf()

int main() {

    int rows, cols;     // Variables to store number of rows and columns

    // Asking user for the size of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10]; // Declaring a matrix of max size 10x10

    // Reading the matrix elements from the user
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {         // Loop for rows
        for (int j = 0; j < cols; j++) {     // Loop for columns
            scanf("%d", &matrix[i][j]);      // Read each element
        }
    }

    // Printing the matrix
    printf("\nThe matrix is:\n");

    for (int i = 0; i < rows; i++) {         // Loop for rows
        for (int j = 0; j < cols; j++) {     // Loop for columns
            printf("%d ", matrix[i][j]);     // Print each element
        }
        printf("\n");                        // Move to next line after each row
    }

    return 0;  // End of program
}
