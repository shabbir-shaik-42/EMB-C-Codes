#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols);
void addMatrices(int result[][100], int matrix1[][100], int matrix2[][100], int rows, int cols);
void printMatrix(int matrix[][100], int rows, int cols);

int main() {
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows, cols;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    printf("Enter the elements of the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    printf("First Matrix:\n");
    printMatrix(matrix1, rows, cols);

    printf("Second Matrix:\n");
    printMatrix(matrix2, rows, cols);

    // Add the matrices
    addMatrices(result, matrix1, matrix2, rows, cols);

    printf("Resultant Matrix after addition:\n");
    printMatrix(result, rows, cols);

    return 0;
}

void inputMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int result[][100], int matrix1[][100], int matrix2[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
