///Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // The matrix must be square for diagonal check
    if (rows != cols) {
        printf("Matrix is not square, so diagonal check is not possible.\n");
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

    // Extracting diagonal elements
    int diagonal[rows];
    for (int i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Checking if diagonal elements are distinct
    int distinct = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    // Output result
    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
