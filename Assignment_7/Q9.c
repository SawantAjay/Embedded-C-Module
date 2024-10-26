/*Write A C program to show bit masking and modify specific bits within a variable. 
Demonstrates how to use bitwise operators with masks.*/

#include <stdio.h>

// Define bit positions for demonstration
#define BIT0 0  // Bit position 0
#define BIT1 1  // Bit position 1
#define BIT2 2  // Bit position 2
#define BIT3 3  // Bit position 3

// Macros for bitwise operations
#define SET_BITS(reg, mask)    ((reg) |= (mask))    // Set bits using a mask
#define CLEAR_BITS(reg, mask)  ((reg) &= ~(mask))   // Clear bits using a mask
#define TOGGLE_BITS(reg, mask) ((reg) ^= (mask))    // Toggle bits using a mask
#define CHECK_BITS(reg, mask)  ((reg) & (mask))     // Check if bits are set

int main() {
    unsigned int var = 0x0F; // Initial value: 00001111 (binary), 15 (decimal)
    unsigned int mask;

    // Print initial value
    printf("Initial value of var: 0x%02X\n", var);

    // Define a mask to modify bits
    mask = (1 << BIT1) | (1 << BIT2); // Mask to affect BIT1 and BIT2

    // Set specific bits
    SET_BITS(var, mask);
    printf("After setting BIT1 and BIT2: 0x%02X\n", var);

    // Clear specific bits
    CLEAR_BITS(var, mask);
    printf("After clearing BIT1 and BIT2: 0x%02X\n", var);

    // Toggle specific bits
    TOGGLE_BITS(var, mask);
    printf("After toggling BIT1 and BIT2: 0x%02X\n", var);

    // Check specific bits
    if (CHECK_BITS(var, mask)) {
        printf("Bits BIT1 and BIT2 are set.\n");
    } else {
        printf("Bits BIT1 and BIT2 are not set.\n");
    }

    return 0;
}


