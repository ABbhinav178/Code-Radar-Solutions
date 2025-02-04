#include <stdio.h>

int main() {
    int hex, oct;

    // Input hexadecimal and octal values
    printf("Enter a hexadecimal number (e.g., 0x1A): ");
    scanf("%x", &hex);

    printf("Enter an octal number (e.g., 012): ");
    scanf("%o", &oct);

    // Display the values in decimal, hexadecimal, and octal
    printf("\nConverted Values:\n");
    printf("Decimal from Hex: %d\n", hex);
    printf("Hexadecimal: %#x\n", hex);
    printf("Octal: %#o\n", hex);

    printf("\nConverted Values from Octal:\n");
    printf("Decimal from Octal: %d\n", oct);
    printf("Hexadecimal: %#x\n", oct);
    printf("Octal: %#o\n", oct);

    return 0;
}