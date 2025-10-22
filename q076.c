//Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // A symmetric matrix must be square
    if (rows != cols) {
        printf("False (Matrix is not square)\n");
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

    // Checking for symmetry
    int isSymmetric = 1; // assume true initially

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Output result
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}