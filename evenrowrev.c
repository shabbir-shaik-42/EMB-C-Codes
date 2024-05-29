#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols);
void reverseEvenRows(int matrix[][100], int rows, int cols);

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

    printf("\nThe matrix with even rows reversed:\n");
    reverseEvenRows(matrix, rows, cols);

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

void reverseEvenRows(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 1) { // Check if the row number is odd
            for (int j = cols - 1; j >= 0; j--) {
                printf("%d ", matrix[i][j]);
            }
        } else {
            for (int j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

