//Perform diagonal traversal of a matrix.
#include <stdio.h>
// stdio.h is required for printf() and scanf()

int main() {

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];
    // declaring matrix of size 100x100 max

    printf("\nEnter the matrix elements:\n");

    // input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Step 1: Start diagonals from the FIRST ROW
    for (int startCol = 0; startCol < cols; startCol++) {

        int i = 0;          // start from first row
        int j = startCol;   // starting column changes

        // move diagonally down-left
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");   // print next diagonal on new line
    }

    // Step 2: Start diagonals from the LAST COLUMN (excluding first row)
    for (int startRow = 1; startRow < rows; startRow++) {

        int i = startRow;   // starting row changes
        int j = cols - 1;   // always start from last column

        // move diagonally down-left
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
