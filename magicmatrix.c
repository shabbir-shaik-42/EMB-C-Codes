#include <stdio.h>
#include <stdlib.h>

// Function declaration
void generateMagicSquare(int n);

int main() {
    int n;

    printf("Enter an odd number (greater than 1): ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 3) {
        printf("Invalid input. Please enter an odd number greater than 1.\n");
    } else {
        generateMagicSquare(n);
    }

    return 0;
}

// Function definition to generate the magic square
void generateMagicSquare(int n) {
    int magicSquare[n][n];

    // Initialize all cells to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Initialize position for 1
    int row = 0;
    int col = n / 2;

    int num = 1;

    // Fill the magic square
    while (num <= n * n) {
        magicSquare[row][col] = num;

        // Calculate next position
        int nextRow = (row - 1 + n) % n;
        int nextCol = (col + 1) % n;

        if (magicSquare[nextRow][nextCol] != 0) {
            // If the next cell is already filled, move down
            row = (row + 1) % n;
        } else {
            // Move to the next cell
            row = nextRow;
            col = nextCol;
        }

        num++;
    }

    // Print the magic square
    printf("Magic Square of order %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

