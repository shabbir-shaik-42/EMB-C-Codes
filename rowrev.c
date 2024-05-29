#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols);
void reverseMatrixRows(int matrix[][100], int rows, int cols);

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

    printf("\nThe matrix with reversed rows (from right to left):\n");
    reverseMatrixRows(matrix, rows, cols);

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

void reverseMatrixRows(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
