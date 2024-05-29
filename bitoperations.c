#include <stdio.h>

// Function declarations
int bitstate(int num, int bitpos);
int togglebit(int num, int bitpos);
int togglenibble(int num, int bitpos);
int leftrotate(int num, int bitpos);
int rightrotate(int num, int bitpos);
int maskbit(int num, int bitpos);
void binary(int num);

int main() {
    int num, bitpos;

    // Input number and bit position
    printf("Enter a number (0-65535): ");
    scanf("%d", &num);
    printf("Enter a bit position (0-15): ");
    scanf("%d", &bitpos);

    // Task 1: Check and print the bit state
    int bitState = bitstate(num, bitpos);
    printf("Bit state at position %d: %d\n", bitpos, bitState);

    // Task 2: Toggle the bit
    int toggledNum = togglebit(num, bitpos);
    printf("Number after toggling bit %d: %d\n", bitpos, toggledNum);

    // Task 3: Toggle the nibble
    int toggledNibble = togglenibble(num, bitpos);
    printf("Number after toggling nibble containing bit %d: %d\n", bitpos, toggledNibble);

    // Task 4: Left rotate the number
    int leftRotated = leftrotate(num, bitpos);
    printf("Number after left rotation by %d bits: %d\n", bitpos, leftRotated);

    // Task 5: Right rotate the number
    int rightRotated = rightrotate(num, bitpos);
    printf("Number after right rotation by %d bits: %d\n", bitpos, rightRotated);

    // Task 6: Mask the bit
    int maskedNum = maskbit(num, bitpos);
    printf("Number after masking bit %d: %d\n", bitpos, maskedNum);

    // Task 7: Convert to binary and print
    printf("Binary representation of the number: ");
    binary(num);

    
}

// Function definitions

int bitstate(int num, int bitpos) {
    return (num >> bitpos) & 1;
}

int togglebit(int num, int bitpos) {
    return num ^ (1 << bitpos);
}

int togglenibble(int num, int bitpos) {
    int nibblePos = bitpos / 4; // Determine which nibble to toggle (0-3)
    int mask = 0xF << (nibblePos * 4); // Create a mask for the nibble
    return num ^ mask; // Toggle the nibble
}

int leftrotate(int num, int bitpos) {
    return ((num << bitpos) | (num >> (16 - bitpos))) & 0xFFFF;
}

int rightrotate(int num, int bitpos) {
    return ((num >> bitpos) | (num << (16 - bitpos))) & 0xFFFF;
}

int maskbit(int num, int bitpos) {
    return num & ~(1 << bitpos);
}

void binary(int num) {
    for (int i = 15; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
