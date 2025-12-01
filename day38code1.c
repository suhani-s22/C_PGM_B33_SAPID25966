//Add two matrices.
#include <stdio.h>   // For printf() and scanf()

int main() {

    int rows, cols;   // Variables to store matrix dimensions

    // Asking user for size of both matrices
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declaring matrices
    int A[10][10], B[10][10], Sum[10][10];

    // Reading first matrix
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {         
        for (int j = 0; j < cols; j++) {     
            scanf("%d", &A[i][j]);           // Input A[i][j]
        }
    }

    // Reading second matrix
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {         
        for (int j = 0; j < cols; j++) {     
            scanf("%d", &B[i][j]);           // Input B[i][j]
        }
    }

    // Adding the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];   // Formula for matrix addition
        }
    }

    // Printing the result
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < rows; i++) {         
        for (int j = 0; j < cols; j++) {     
            printf("%d ", Sum[i][j]);        // Print summed value
        }
        printf("\n");                        // Next row
    }

    return 0;   // End of program
}
