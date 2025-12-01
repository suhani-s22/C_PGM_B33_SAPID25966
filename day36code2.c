//Find the sum of all elements in a matrix.
#include <stdio.h>   // For printf() and scanf()

int main() {

    int rows, cols;   // Variables to store number of rows and columns

    // Taking matrix size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10];   // Matrix with max size 10 x 10
    int sum = 0;          // Variable to store total sum of matrix elements

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {           // Loop for rows
        for (int j = 0; j < cols; j++) {       // Loop for columns
            scanf("%d", &matrix[i][j]);        // Input an element
            sum += matrix[i][j];               // Add element to sum
        }
    }

    // Displaying the sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;   // End of program
}
