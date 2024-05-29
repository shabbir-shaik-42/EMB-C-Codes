#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) { // Check if the number is even
        printf("First 5 even numbers:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", num + (i * 2));
        }

        printf("\nFirst 5 odd numbers:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", num + 1 + (i * 2));
        }
    } else { // The number is odd
        printf("First 5 odd numbers:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", num + (i * 2));
        }

        printf("\nFirst 5 even numbers:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d ", num + 1 + (i * 2));
        }
    }

    printf("\n");

  
}

