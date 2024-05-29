#include <stdio.h>

// Function declaration
void printNumbers(int start, int end);

int main() {
    int start = 1;
    int end = 10;

    // Function calling
    printNumbers(start, end);

    return 0;
}

// Function definition
void printNumbers(int start, int end) {
    if (start <= end) {
        printf("%d\n", start);
        printNumbers(start + 1, end);
    }
}
    
