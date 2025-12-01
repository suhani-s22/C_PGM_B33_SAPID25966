
//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
// stdio.h allows use of printf() and scanf()

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        // Only square matrices have a proper main diagonal
        printf("This is not a square matrix. Cannot check diagonal.\n");
        return 0;
    }

    int matrix[100][100];
    // declaring a matrix of max size 100x100

    printf("\nEnter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            // input each element
        }
    }

    int diagonal[100];
    // array to store diagonal elements

    for (int i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
        // extract the diagonal element where row index = column index
    }

    int distinct = 1; 
    // assume diagonal elements are distinct

    // check for duplicates in the diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                // if two diagonal values match, they are not distinct
                distinct = 0;
                break;
            }
        }
        if (distinct == 0)
            break;
    }

    if (distinct == 1)
        printf("\nAll diagonal elements are DISTINCT.\n");
    else
        printf("\nDiagonal elements are NOT distinct. Duplicate found.\n");

    return 0;
}
