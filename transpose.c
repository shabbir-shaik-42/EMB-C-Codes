#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols);
void transposeMatrix(int matrix[][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    inputMatrix(matrix, rows, cols);

    printf("The original matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(matrix, rows, cols);

    printf("\nThe transpose of the matrix is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter the elements row by row:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int matrix[][100], int rows, int cols) {
    int resultMatrix[100][100];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            resultMatrix[i][j] = matrix[j][i];
        }
    }

    // Copy the transposed matrix back to the original matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = resultMatrix[i][j];
        }
    }
}

