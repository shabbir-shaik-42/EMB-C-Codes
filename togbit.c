#include <stdio.h>

int main() {
    unsigned char num; // Using unsigned char to ensure 8 bits
    int bitPosition;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("Enter the bit position to toggle (0-7): ");
    scanf("%d", &bitPosition);

    if (bitPosition < 0 || bitPosition > 7) {
        printf("Invalid bit position. Please enter a number between 0 and 7.\n");
        return 1; // Exit with an error code
    }

    unsigned char mask = 1 << bitPosition; // Create a mask with the desired bit set to 1
    num = num ^ mask; // Toggle the bit using XOR (^) operator

    printf("Result after toggling bit %d: %d\n", bitPosition, num);

    
}

