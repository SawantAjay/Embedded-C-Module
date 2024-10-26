/*Write a C program to perform bitwise left and right shift operations.*/

#include <stdio.h>

// Function to print a number in binary format
void printBinary(unsigned int num, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    unsigned int num = 15;  // Example number (0x0F in hexadecimal)

    // Number of bits to print (assuming we're working with 8-bit numbers)
    int bits = 8;

    // Print the original number
    printf("Original number: %u (hex: 0x%X, binary: ", num, num);
    printBinary(num, bits);
    printf(")\n");

    // Perform bitwise left shift by 2 positions
    unsigned int leftShift = num << 2;
    printf("Left shift by 2 positions: %u (hex: 0x%X, binary: ", leftShift, leftShift);
    printBinary(leftShift, bits);
    printf(")\n");

    // Perform bitwise right shift by 2 positions
    unsigned int rightShift = num >> 2;
    printf("Right shift by 2 positions: %u (hex: 0x%X, binary: ", rightShift, rightShift);
    printBinary(rightShift, bits);
    printf(")\n");

    return 0;
}

