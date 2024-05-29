#include <stdio.h>

// Function declaration
int fibonacci(int n);

void printFibonacci(int n, int count);

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printFibonacci(n, 0);

    return 0;
}

// Function definition for Fibonacci calculation
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci series recursively
void printFibonacci(int n, int count) {
    if (count < n) {
        printf("%d ", fibonacci(count));
        printFibonacci(n, count + 1);
    }
}
