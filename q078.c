// Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // The matrix must be square
    if (rows != cols) {
        printf("Matrix is not square, so diagonal sum is not possible.\n");
        return 0;
    }

    // Reading matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
    printf("Hence, the matrix looks like:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculating the sum of main diagonal elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    // Printing the result
    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
