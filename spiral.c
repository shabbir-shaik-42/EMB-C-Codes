#include <stdio.h>

// Function declarations
void inputMatrix(int matrix[][100], int rows, int cols);
void printMatrix(int matrix[][100], int rows, int cols);
void printSpiral(int matrix[][100], int rows, int cols);

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    inputMatrix(matrix, rows, cols);

    printf("Matrix:\n");
    printMatrix(matrix, rows, cols);

    printf("\nSpiral Order (as %d x %d matrix):\n", rows, cols);
    printSpiral(matrix, rows, cols);

    return 0;
}

// Function definition for inputting the matrix
void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter the elements row by row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Enter row %d (%d elements): ", i + 1, cols);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function definition for printing the matrix
void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function definition for printing elements in a spiral order as an m * n matrix
void printSpiral(int matrix[][100], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print the rightmost column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print the bottom row (if exists)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print the leftmost column (if exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

