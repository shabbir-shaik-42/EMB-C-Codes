#include <stdio.h>

int main() {
    unsigned char num; // Using unsigned char to ensure 8 bits
    int rotateCount;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Enter the number of times to left rotate: ");
    scanf("%d", &rotateCount);

    // Perform left rotation
    for (int i = 0; i < rotateCount; i++) {
        unsigned char msb = (num & 0x80) >> 7; // Save the most significant bit
        num = (num << 1) | msb; // Left rotate by one bit
    }

    printf("Result after left rotating %d times: %d\n", rotateCount, num);

    
}

