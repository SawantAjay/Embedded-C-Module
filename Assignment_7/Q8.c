/*In embedded systems, you often need to control specific bits in a hardware register to enable or 
disable features. Write a C program to use bitwise operators to set, clear, and toggle flags in a 
register.*/

#include <stdio.h>

#define REGISTER_INIT 0x00  // Initial value of the register

// Define bit positions for flags
#define FLAG1 0  // Bit position 0
#define FLAG2 1  // Bit position 1
#define FLAG3 2  // Bit position 2
#define FLAG4 3  // Bit position 3

// Macros for bitwise operations
#define SET_BIT(reg, bit)    ((reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit)  ((reg) &= ~(1 << (bit)))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1 << (bit)))
#define CHECK_BIT(reg, bit)  ((reg) & (1 << (bit)) ? 1 : 0)

int main() {
    unsigned int reg = REGISTER_INIT;  // Simulated hardware register

    // Print initial state
    printf("Initial register value: 0x%02X\n", reg);

    // Set FLAG2 (bit position 1)
    SET_BIT(reg, FLAG2);
    printf("After setting FLAG2: 0x%02X\n", reg);

    // Clear FLAG1 (bit position 0)
    CLEAR_BIT(reg, FLAG1);
    printf("After clearing FLAG1: 0x%02X\n", reg);

    // Toggle FLAG3 (bit position 2)
    TOGGLE_BIT(reg, FLAG3);
    printf("After toggling FLAG3: 0x%02X\n", reg);

    // Check if FLAG4 (bit position 3) is set
    if (CHECK_BIT(reg, FLAG4)) {
        printf("FLAG4 is set.\n");
    } else {
        printf("FLAG4 is not set.\n");
    }

    return 0;
}