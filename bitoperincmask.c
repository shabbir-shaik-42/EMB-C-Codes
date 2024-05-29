#include <stdio.h>

// Function declarations
void bitstate(unsigned short num, int bitpos);
unsigned short togglebit(unsigned short num, int bitpos);
unsigned short togglenibble(unsigned short num, int bitpos);
unsigned short leftrotate(unsigned short num, int bitpos);
unsigned short rightrotate(unsigned short num, int bitpos);
unsigned short maskbit(unsigned short num, int bitpos);
void binary(unsigned short num);

int main() {
    unsigned short num;
    int bitpos;

    // Input number and bit position
    printf("Enter a number (0-65535): ");
    scanf("%hu", &num);

    if (num > 65535) {
        printf("Error: Number exceeds 65535. Please enter a number between 0 and 65535.\n");
        return 1; // Exit program with an error code
    }

    printf("Enter a bit position (0-15): ");
    scanf("%d", &bitpos);

    if (bitpos > 15) {
        printf("Error: Bit position exceeds 15. Please enter a bit position between 0 and 15.\n");
        return 1; // Exit program with an error code
    }

    // Task 1: Check and print the bit state
    printf("Bit state at position %d: ", bitpos);
    bitstate(num, bitpos);

    // Task 2: Toggle the bit
    unsigned short toggledNum = togglebit(num, bitpos);
    printf("Number after toggling bit %d: %hu\n", bitpos, toggledNum);

    // Task 3: Toggle the nibble
    unsigned short toggledNibble = togglenibble(num, bitpos);
    printf("Number after toggling nibble containing bit %d: %hu\n", bitpos, toggledNibble);

    // Task 4: Left rotate the number
    unsigned short leftRotated = leftrotate(num, bitpos);
    printf("Number after left rotation by %d bits: %hu\n", bitpos, leftRotated);

    // Task 5: Right rotate the number
    unsigned short rightRotated = rightrotate(num, bitpos);
    printf("Number after right rotation by %d bits: %hu\n", bitpos, rightRotated);

    // Task 6: Mask the bit
    unsigned short maskedNum = maskbit(num, bitpos);
    printf("Number after masking bit %d: %hu\n", bitpos, maskedNum);

    // Task 7: Convert to binary and print
    printf("Binary representation of the number: ");
    binary(num);

    
}

// Function definitions

void bitstate(unsigned short num, int bitpos) {
    unsigned short bit = (num >> bitpos) & 1;
    if (bit == 1) {
        printf("on\n");
    } else {
        printf("off\n");
    }
}

unsigned short togglebit(unsigned short num, int bitpos) {
    return num ^ (1 << bitpos);
}

unsigned short togglenibble(unsigned short num, int bitpos) {
    int nibblePos = bitpos / 4; // Determine which nibble to toggle (0-3 for 16 bits)
    unsigned short mask = 0xF << (nibblePos * 4); // Create a mask for the nibble
    return num ^ mask; // Toggle the nibble
}

unsigned short leftrotate(unsigned short num, int bitpos) {
    return ((num << bitpos) | (num >> (16 - bitpos))) & 0xFFFF;
}

unsigned short rightrotate(unsigned short num, int bitpos) {
    return ((num >> bitpos) | (num << (16 - bitpos))) & 0xFFFF;
}

unsigned short maskbit(unsigned short num, int bitpos) {
    return num & ~(1 << bitpos);
}

void binary(unsigned short num) {
    for (int i = 15; i >= 0; i--) {
        unsigned short bit = (num >> i) & 1;
        printf("%hu", bit);
    }
    printf("\n");
}

