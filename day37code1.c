//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>   // For printf() and scanf()

int main() {

    int rows, cols;   // Variables to store number of rows and columns

    // Input matrix size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10];     // Declare matrix (max size 10x10)
    int rowSum[10];         // Array to store sum of each row

    // Read matrix elements
    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {           // Loop for rows
        for (int j = 0; j < cols; j++) {       // Loop for columns
            scanf("%d", &matrix[i][j]);        // Read an element
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;                         // Initialize row sum to 0
        
        for (int j = 0; j < cols; j++) {       // Loop through each column
            rowSum[i] += matrix[i][j];         // Add element to row sum
        }
    }

    // Print the result
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;   // End of program
}
