#include <stdio.h>
#include <stdbool.h>

// Function declaration
void fillArray(int array[], int size, int num);
bool isPrime(int num);
void filterPrimes(int original[], int size, int result[]);
void printArray(int array[], int size);
void findMaxConsecutiveZeros(int array[], int size, int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int arraySize = 100;
    int numbers[arraySize];

    // Function calling (fill the original array with the first 100 numbers)
    fillArray(numbers, arraySize, num);

    // Function calling (print the first 100 numbers)
    printf("First 100 numbers starting from %d:\n", num);
    printArray(numbers, arraySize);

    // Function calling (filter primes and store in the numbers array)
    filterPrimes(numbers, arraySize, numbers);

    // Function calling (print the array with non-primes replaced by zeros)
    printf("Array with non-primes replaced by zeros:\n");
    printArray(numbers, arraySize);

    // Function calling (find max consecutive zeros and count)
    findMaxConsecutiveZeros(numbers, arraySize, num);

    return 0;
}

// Function definition (fill the array)
void fillArray(int array[], int size, int num) {
    for (int i = 0; i < size; i++) {
        array[i] = num + i;
    }
}

// Function definition (check if a number is prime)
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function definition (filter primes and store in result)
void filterPrimes(int original[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        if (!isPrime(original[i])) {
            result[i] = 0; // Replace non-prime with zero
        }
    }
}

// Function definition (print the array)
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function definition (find max consecutive zeros and count)
void findMaxConsecutiveZeros(int array[], int size, int num) {
    int maxCount = 0;
    int currentCount = 0;
    int startIdx = 0;
    int endIdx = 0;
    int currentStartIdx = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            currentCount++;
            if (currentCount == 1) {
                currentStartIdx = i;
            }
            if (currentCount > maxCount) {
                maxCount = currentCount;
                startIdx = currentStartIdx;
                endIdx = i;
            }
        } else {
            currentCount = 0;
        }
    }

    printf("Max consecutive zeros range: from %d to %d\n", num + startIdx, num + endIdx);
    printf("Number of consecutive zeros: %d\n", maxCount);
}

