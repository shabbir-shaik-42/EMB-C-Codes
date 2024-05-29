#include <stdio.h>

int main() {
    unsigned int num; // Using unsigned int to ensure 32 bits
    int bitPosition;

    printf("Enter a 32-bit number: ");
    scanf("%u", &num);

    printf("Enter the bit position (0-31) to toggle the corresponding nibble: ");
    scanf("%d", &bitPosition);

    if (bitPosition < 0 || bitPosition > 31) {
        printf("Invalid bit position. Please enter a number between 0 and 31.\n");
        return 1; // Exit with an error code
    }

    int nibblePosition = bitPosition / 4; // Calculate the corresponding nibble position
    unsigned int mask = 0xFu << (nibblePosition * 4); // Create a mask to toggle the entire nibble
    num = num ^ mask; // Toggle the nibble using XOR (^) operator

    printf("Result after toggling the nibble at bit position %d: %u\n", bitPosition, num);

    
}
