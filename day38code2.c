//Check if a matrix is symmetric.
#include <stdio.h>  
// stdio.h allows us to use printf() and scanf()

int main() {  
    int rows, cols;
    // variables to store number of rows and columns

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // input rows

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    // input columns

    if (rows != cols) {
        // If rows and columns are not equal, matrix is NOT square
        printf("Matrix is NOT symmetric because it is not a square matrix.\n");
        return 0;  
        // stop the program
    }

    int matrix[100][100];
    // declare matrix (max size 100 × 100)

    printf("\nEnter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            // reading each element
        }
    }

    int isSymmetric = 1;  
    // assume matrix IS symmetric (1 = true)

    // check symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] != matrix[j][i]) {
                // compare current element with its transpose element
                isSymmetric = 0;  
                // mark as NOT symmetric
                break;  
                // break inner loop
            }
        }

        if (isSymmetric == 0)
            break;  // break outer loop as well
    }

    if (isSymmetric == 1)
        printf("\nThe matrix IS symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;  
}
