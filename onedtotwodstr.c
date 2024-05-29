#include <stdio.h>
#include <string.h>

int main() {
    char onestring[] = "Apuroop,Roop,Swaroop,Anuroop"; // Your one-dimensional string
    char list[4][20]; // 2D array to store the substrings, assuming a maximum length of 20 characters
    int row = 0; // Current row in the 2D array
    int col = 0; // Current column in the 2D array

    for (int i = 0; i < strlen(onestring); i++) {
        if (onestring[i] != ',') {
            list[row][col] = onestring[i]; // Copy the character to the 2D array
            col++; // Move to the next column
        } else {
            list[row][col] = '\0'; // Null-terminate the string in the 2D array
            row++; // Move to the next row
            col = 0; // Reset the column
        }
    }
    list[row][col] = '\0'; // Null-terminate the last string in the 2D array

    // Print the 2D array to verify the result
    for (int i = 0; i <= row; i++) {
        printf("list[%d]: %s\n", i, list[i]);
    }

    return 0;
}
