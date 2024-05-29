#include <stdio.h>

int main() {
    int number, reversed, sum;

    // Input the initial number
    printf("Enter a number: ");
    scanf("%d", &number);

    while (1) {
        // Reverse the number
        reversed = 0;
        int temp = number;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }

        if (number == reversed) {
            printf("Palindrome: %d\n", number);
            break;
        } else {
            printf("Not a palindrome: %d\n", number);
            sum = number + reversed;
            printf("Sum: %d\n", sum);
            number = sum;
        }
    }

    
}

