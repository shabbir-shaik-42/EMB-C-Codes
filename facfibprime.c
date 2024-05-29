#include <stdio.h>
#include <stdbool.h>

// Function declarations
int fibonacci(int n);
int factorial(int n);
void printFibonacciSeries(int n, int count);
bool isPrime(int n);

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial and prime numbers are not defined for negative numbers.\n");
    } else {
        printf("Fibonacci Series with %d terms: ", num);
        printFibonacciSeries(num, 0);
        printf("\n");

        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);

        printf("Next 5 prime numbers from %d (including %d if it's prime): ", num, num);
        int count = 0;
        while (count < 5) {
            if (isPrime(num)) {
                printf("%d ", num);
                count++;
            }
            num++;
        }
        printf("\n");
    }

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

// Function definition for factorial calculation
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to print the Fibonacci series recursively
void printFibonacciSeries(int n, int count) {
    if (count < n) {
        printf("%d ", fibonacci(count));
        printFibonacciSeries(n, count + 1);
    }
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

