//Find the transpose of a matrix.
#include <stdio.h>   // For printf() and scanf()

int main() {

    int rows, cols;   // Variables to store number of rows and columns

    // Taking input for matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10];        // Original matrix
    int transpose[10][10];     // Transposed matrix

    // Reading the matrix from user
    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {           // Loop for rows
        for (int j = 0; j < cols; j++) {       // Loop for columns
            scanf("%d", &matrix[i][j]);        // Input each element
        }
    }

    // Creating the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];    // Swap rows and columns
        }
    }

    // Printing the transpose
    printf("\nTranspose of the matrix:\n");

    for (int i = 0; i < cols; i++) {           // Note: rows ↔ columns swapped
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);    // Print each element
        }
        printf("\n");
    }

    return 0;   // End of program
}
