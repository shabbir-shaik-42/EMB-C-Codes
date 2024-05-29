#include <stdio.h>

// Function declarations
int evenoddnum(int);
int Maxthreenum(int, int, int);
void evenoddseries(int);
void evensumodd(int, int);
int Palindrome(int);
int isprime(int);
void Primeseries(int);

int main() {
    int choice;
    printf("Choose a program to run (1-7):\n");
    printf("1. Even or Odd Number\n");
    printf("2. Maximum of Three Numbers\n");
    printf("3. First Five Even and Odd Numbers\n");
    printf("4. First Five Even Numbers and Sum of 5 Odd Numbers\n");
    printf("5. Palindrome Detector\n");
    printf("6. Prime Number Checker\n");
    printf("7. Generate 5 Prime Numbers\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            evenoddnum(num);
            break;
        }
        case 2: {
            int num1, num2, num3;
            printf("Enter three numbers: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            Maxthreenum(num1, num2, num3);
            break;
        }
        case 3: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            evenoddseries(num);
            break;
        }
        case 4: {
            int num1, num2;
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            evensumodd(num1, num2);
            break;
        }
        case 5: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            Palindrome(num);
            break;
        }
        case 6: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            isprime(num);
            break;
        }
        case 7: {
            Primeseries(5);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// Function definitions
int evenoddnum(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return num % 2;
}

int Maxthreenum(int num1, int num2, int num3) {
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("The maximum number is: %d\n", max);
    return max;
}

void evenoddseries(int num) {
    printf("First 5 even numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num + (i * 2));
    }
    printf("\n");

    printf("First 5 odd numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num + 1 + (i * 2));
    }
    printf("\n");
}

void evensumodd(int start, int end) {
    printf("Even numbers in the range %d-%d with equal spacing:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Sum of odd numbers in the range %d-%d: ", start, end);
    int oddSum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            oddSum += i;
        }
    }
    printf("%d\n", oddSum);
}

int Palindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
        return 1;
    } else {
        printf("%d is not a palindrome.\n", original);
        return 0;
    }
}

int isprime(int num) {
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }
    printf("%d is a prime number.\n", num);
    return 1;
}

void Primeseries(int count) {
    int num = 2; // Start with the first prime number
    int primeCount = 0;

    printf("First %d prime numbers:\n", count);
}
