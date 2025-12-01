//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
// stdio.h allows printf() and scanf()

int main() {

    int n;
    // n will store number of rows and columns (since it's a square matrix)

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    // input matrix size

    int matrix[100][100];
    // declaring matrix of max size 100x100

    printf("\nEnter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            // input each element
        }
    }

    int sum = 0;
    // variable to store the sum of diagonal elements

    for (int i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
        // add diagonal element where row = column
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
